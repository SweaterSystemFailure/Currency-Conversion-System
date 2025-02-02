#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

//currency table. figures calculated using Google currency conversion and accurate as of 2/1/25.
void usdTable(float, string);
void gbpTable(float, string);
void eurTable(float, string);
void jpyTable(float, string);
void customTable(float, string);

int main()
{
    float currencyIn;
    string conversionOut, conversionIn;
    char conversionLetter;

    cout << "This program will tell you how much your currency is worth in another currency." << endl;
    cout << "What type of currency do you have? [USD, GBP, EUR, JPY, or CUSTOM] ";
    cin >> conversionIn;
    cout << "How much do you have? No need to include a unit symbol! ";
    cin >> currencyIn;
    cout << "Finally, what type of currency would you like to have? [USD, GBP, EUR, or JPY] ";
    cin >> conversionOut;

    conversionLetter =
        (conversionIn == "USD" || conversionIn == "usd") ? 'U' :
        (conversionIn == "GBP" || conversionIn == "gbp") ? 'G' :
        (conversionIn == "EUR" || conversionIn == "eur") ? 'E' :
        (conversionIn == "JPY" || conversionIn == "jpy") ? 'J' :
        (conversionIn == "CUSTOM" || conversionIn == "Custom" ||conversionIn == "custom") ? 'C' :
        'X';

    switch (conversionLetter) {
    case 'U':
        usdTable(currencyIn, conversionOut);
        break;
    case 'G':
        gbpTable(currencyIn, conversionOut);
        break;
    case 'E':
        eurTable(currencyIn, conversionOut);
        break;
    case 'J':
        jpyTable(currencyIn, conversionOut);
        break;
    case 'C':
        customTable(currencyIn, conversionOut);
        break;
    default:
        cout << "Enter a valid conversion type!";
    }

    return 0;
}

void usdTable(float currencyIn, string convertTo) {
    float usdMultiplier = 1.0;
    float gbpMultiplier = .81;
    float eurMultiplier = .96;
    float jpyMultiplier = 155.18;

    float output =
        (convertTo == "USD") ? currencyIn * usdMultiplier :
        (convertTo == "GBP") ? currencyIn * gbpMultiplier :
        (convertTo == "EUR") ? currencyIn * eurMultiplier :
        (convertTo == "JPY") ? currencyIn * jpyMultiplier :
        0;

   string outputType =
        (convertTo == "USD") ? " dollars" :
        (convertTo == "GBP") ? " pounds" :
        (convertTo == "EUR") ? " euros" :
        (convertTo == "JPY") ? " yen" :
        "Error!";

    cout << "Your " << setprecision(2) << fixed << currencyIn << " dollars are worth " << setprecision(2) << fixed << output << outputType << ".";
}

void gbpTable(float currencyIn, string convertTo) {
    float usdMultiplier = 1.24;
    float gbpMultiplier = 1.00;
    float eurMultiplier = 1.2;
    float jpyMultiplier = 192.3;

    float output =
        (convertTo == "USD") ? currencyIn * usdMultiplier :
        (convertTo == "GBP") ? currencyIn * gbpMultiplier :
        (convertTo == "EUR") ? currencyIn * eurMultiplier :
        (convertTo == "JPY") ? currencyIn * jpyMultiplier :
        0;

    string outputType =
        (convertTo == "USD") ? " dollars" :
        (convertTo == "GBP") ? " pounds" :
        (convertTo == "EUR") ? " euros" :
        (convertTo == "JPY") ? " yen" :
        "Error!";

    cout << "Your " << setprecision(2) << fixed << currencyIn << " pounds sterling are worth " << setprecision(2) << fixed << output << outputType << ".";
}

void eurTable(float currencyIn, string convertTo) {
    float usdMultiplier = 1.04;
    float gbpMultiplier = .84;
    float eurMultiplier = 1.00;
    float jpyMultiplier = 160.81;

    float output =
        (convertTo == "USD") ? currencyIn * usdMultiplier :
        (convertTo == "GBP") ? currencyIn * gbpMultiplier :
        (convertTo == "EUR") ? currencyIn * eurMultiplier :
        (convertTo == "JPY") ? currencyIn * jpyMultiplier :
        0;

    string outputType =
        (convertTo == "USD") ? " dollars" :
        (convertTo == "GBP") ? " pounds" :
        (convertTo == "EUR") ? " euros" :
        (convertTo == "JPY") ? " yen" :
        "Error!";

    cout << "Your " << setprecision(2) << fixed << currencyIn << " euros are worth " << setprecision(2) << fixed << output << outputType << ".";
}

void jpyTable(float currencyIn, string convertTo) {
    float usdMultiplier = .0064;
    float gbpMultiplier = .0052;
    float eurMultiplier = .0062;
    float jpyMultiplier = 1.00;

    float output =
        (convertTo == "USD") ? currencyIn * usdMultiplier :
        (convertTo == "GBP") ? currencyIn * gbpMultiplier :
        (convertTo == "EUR") ? currencyIn * eurMultiplier :
        (convertTo == "JPY") ? currencyIn * jpyMultiplier :
        0;

    string outputType =
        (convertTo == "USD") ? " dollars" :
        (convertTo == "GBP") ? " pounds" :
        (convertTo == "EUR") ? " euros" :
        (convertTo == "JPY") ? " yen" :
        "Error!";

    cout << "Your " << setprecision(2) << fixed << currencyIn << " yen are worth " << setprecision(2) << fixed << output << outputType << ".";
}

void customTable(float currencyIn, string convertTo) {
    //Professor -- I know this part is wrong. I'm really struggling with the cost_cast function. This works and create the right output, at least.
    float customOutMultiplier = 1.00;

    cout << "What is the promotional conversion rate of your desired currency?";
    cin >> customOutMultiplier;

    float output =
        (convertTo == "USD") ? currencyIn * customOutMultiplier :
        (convertTo == "GBP") ? currencyIn * customOutMultiplier :
        (convertTo == "EUR") ? currencyIn * customOutMultiplier :
        (convertTo == "JPY") ? currencyIn * customOutMultiplier :
        0;

    string outputType =
        (convertTo == "USD") ? " dollars" :
        (convertTo == "GBP") ? " pounds" :
        (convertTo == "EUR") ? " euros" :
        (convertTo == "JPY") ? " yen" :
        "Error!";

    cout << "Your " << setprecision(2) << fixed << currencyIn << " are worth " << setprecision(2) << fixed << output << outputType << ".";
}