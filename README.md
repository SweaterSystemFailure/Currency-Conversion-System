Develop a C++ program that simulates a simple currency conversion system. This system will convert amounts between different currencies using predefined conversion rates.
Requirements:

    Data Initialization:
        Define arrays or individual variables to hold conversion rates between USD, EUR, GBP, and JPY.
        Initialize these using double or float types to ensure precision.

    Core Functionalities:
        Implement a function to convert currency from one type to another.
        modify conversion rates that are initially set as constant for a temporary promotional rate change scenario.

    User Interaction:
        Create a simple console interface where users can input the amount and select currencies to convert from and to.
        Display the result with appropriate formatting using iostream manipulators.

Specific Scenarios to Include:

    Currency Conversion:
        Users enter an amount in one currency and choose which currency to convert it into. The program calculates and shows the equivalent amount in the target currency.
    Promotional Rate Adjustment:
        Temporarily adjust a conversion rate using const_cast to increase promotional activities during specific times (e.g., Black Friday).
    Instructions:
        Write the program in C++ using the described functionalities.
        Ensure that your code includes comments that explain the use of each type of cast and why it is appropriate in each scenario.
        Incorporate error handling to manage potential issues, such as invalid input or out-of-range values.
        Test your program to ensure all functionalities work as expected and that type conversions are both safe and efficient.
