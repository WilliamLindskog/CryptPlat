#include <iostream>

using namespace std;

void printMenu()
{
    // Print menu
    // 1. Print Help
    cout << "1. Print Help" << endl;

    // 2. Print Exchange Statistics
    cout << "2. Print Exchange Statistics" << endl;

    // 3. Make an offer
    cout << "3. Make an offer" << endl;

    // 4. Make a bid
    cout << "4. Make a bid" << endl;

    // 5. Print Wallet
    cout << "5. Print Wallet" << endl;

    // 6. Continue
    cout << "6. Continue" << endl;
}

int getUserOption()
{
    // Get user input (1-6
    int UserInput;
    cout << "Type in 1 - 6" << endl;
    cin >> UserInput;
    cout << "You entered: " << UserInput << endl;
    return UserInput;
}

// function that recieves user option 
void processUserOption(int userInput)
{
    // use switch statement
    switch (userInput)
    {
        case 1:
            cout << "Help - Your aim is to make money. Analyze the market, make bids and profits." << endl;
            break;
        case 2:
            cout << "Exchange Statistics - Print the current exchange statistics." << endl;
            break;
        case 3:
            cout << "Make an offer - Enter the amount of currency you want to sell and the price you want to sell it at." << endl;
            break;
        case 4:
            cout << "Make a bid - Enter the amount of currency you want to buy and the price you want to buy it at." << endl;
            break;
        case 5:
            cout << "Print Wallet - Print the current wallet." << endl;
            break;
        case 6:
            cout << "Continue - Continue the simulation." << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
}

int main(int argc, char *argv[])
{
    // print menu
    printMenu();
    while(true)
    {
        // get user input
        int userInput = getUserOption();
        // process user input
        processUserOption(userInput);
    }
    return 0;
}