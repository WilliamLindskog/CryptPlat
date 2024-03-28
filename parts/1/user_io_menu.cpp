#include <iostream>
#include <map>

using namespace std;

void printHelp()
{
    cout << "Help - Your aim is to make money. " << endl;
    cout << "Analyse the market and make bids and offers. " << endl;
}

void printExchangeStatistics()
{
    cout << "Exchange Statistics" << endl;
    cout << "Here are the statistics for the exchange" << endl;
}

void printMakeAnOffer()
{
    cout << "Making an offer" << endl;
}

void printMakeABid()
{
    cout << "Making a bid" << endl;
}

void printWallet()
{
    cout << "Wallet" << endl;
    cout << "Here is your wallet" << endl;
}

void printContinue()
{
    cout << "Continue" << endl;
}


void printMenu()
{
    // Print menu
    // 1. Print Help
    cout << "Menu" << endl;
    cout << "1. Help" << endl;

    // 2. Print Exchange Statistics
    cout << "2. Exchange Statistics" << endl;

    // 3. Make an offer
    cout << "3. Make an offer" << endl;

    // 4. Make a bid
    cout << "4. Make a bid" << endl;

    // 5. Print Wallet
    cout << "5. Wallet" << endl;

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
    map<int,void(*)()> menu;
    menu[1] = printHelp;
    menu[2] = printExchangeStatistics;
    menu[3] = printMakeAnOffer;
    menu[4] = printMakeABid;
    menu[5] = printWallet;
    menu[6] = printContinue;
    menu[userInput]();

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