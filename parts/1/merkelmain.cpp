#include "merkelmain.h"
#include <iostream>
#include <map>
#include <vector>
#include "OrderBookEntry.h"

using namespace std;

MerkelMain::MerkelMain()
{
    //init();
}

void MerkelMain::init()
{
    cout << "Welcome to MerkelMain" << endl;

    // Load the order book
    loadOrderBook();

    // Print exchange statistics
    printExchangeStatistics();

    int input;
    while (true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
    
}

void MerkelMain::loadOrderBook()
{
    cout << "Loading Order Book" << endl;

    entries.push_back(
        OrderBookEntry(
            0.00020075, 
            0.125, 
            "2020/03/17 17:01:24.884492", 
            "BTC/USDT", 
            OrderBookType::ask
        )
    );

    entries.push_back(
        OrderBookEntry(
            5322222.450228, 
            0.00021, 
            "2020/04/17 17:01:24.884492", 
            "BTC/USDT", 
            OrderBookType::bid
        )
    );

}

void MerkelMain::printHelp()
{
    cout << "Help - Your aim is to make money. " << endl;
    cout << "Analyse the market and make bids and offers. " << endl;
}

void MerkelMain::printExchangeStatistics()
{
    cout << "Exchange Statistics" << endl;
    cout << "Here are the statistics for the exchange" << endl;

    // Print what the order book contains
    cout << "Order book contains " << entries.size() << " entries" << endl;
}

void MerkelMain::printMakeAnOffer()
{
    cout << "Making an offer" << endl;
}

void MerkelMain::printMakeABid()
{
    cout << "Making a bid" << endl;
}

void MerkelMain::printWallet()
{
    cout << "Wallet" << endl;
    cout << "Here is your wallet" << endl;
}

void MerkelMain::printContinue()
{
    cout << "Continue" << endl;
}

void MerkelMain::printMenu()
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

int MerkelMain::getUserOption()
{
    // Get user input (1-6
    int UserInput;
    cout << "Type in 1 - 6" << endl;
    cin >> UserInput;
    cout << "You entered: " << UserInput << endl;
    return UserInput;
}

// function that recieves user option 
void MerkelMain::processUserOption(int userInput)
{
    map<int, void(MerkelMain::*)()> menu;
    menu[1] = &MerkelMain::printHelp;
    menu[2] = &MerkelMain::printExchangeStatistics;
    menu[3] = &MerkelMain::printMakeAnOffer;
    menu[4] = &MerkelMain::printMakeABid;
    menu[5] = &MerkelMain::printWallet;
    menu[6] = &MerkelMain::printContinue;
    (this->*menu[userInput])();
}

/*
void MerkelMain::printOrderBookType(OrderBookType type)
{
    switch(type)
    {
        case OrderBookType::bid:
            cout << "Bid" << endl;
            break;
        case OrderBookType::ask:
            cout << "Ask" << endl;
            break;
    }
}

double MerkelMain::computeAveragePrice(const vector<OrderBookEntry>& entries)
{
    double sum = 0;
    for (OrderBookEntry obe : entries)
    {
        sum += obe.price;
    }
    return sum / entries.size();
}

double MerkelMain::computeLowestPrice(const vector<OrderBookEntry>& entries)
{
    double lowest = entries[0].price;
    for (OrderBookEntry obe : entries)
    {
        if (obe.price < lowest)
        {
            lowest = obe.price;
        }
    }
    return lowest;
}

double MerkelMain::computeHighestPrice(const vector<OrderBookEntry>& entries)
{
    double highest = entries[0].price;
    for (OrderBookEntry obe : entries)
    {
        if (obe.price > highest)
        {
            highest = obe.price;
        }
    }
    return highest;
}

double MerkelMain::computePriceSpread(const vector<OrderBookEntry>& entries)
{
    return computeHighestPrice(entries) - computeLowestPrice(entries);
}
*/