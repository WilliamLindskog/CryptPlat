#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
enum class OrderBookType { bid, ask };

class OrderBookEntry
{
    public:

        OrderBookEntry(
            double price, 
            double amount, 
            string timestamp, 
            string product, 
            OrderBookType orderType
        )
        {
            this->price = price;
            this->amount = amount;
            this->timestamp = timestamp;
            this->product = product;
            this->orderType = orderType;
        }

        double price;
        double amount;
        string timestamp;
        string product;
        OrderBookType orderType;

        double getPrice() const
        {
            return price;
        }
};

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

void printOrderBookType(OrderBookType type)
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

double computeAveragePrice(const vector<OrderBookEntry>& entries)
{
    double sum = 0;
    for (OrderBookEntry obe : entries)
    {
        sum += obe.price;
    }
    return sum / entries.size();
}

double computeLowestPrice(const vector<OrderBookEntry>& entries)
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

double computeHighestPrice(const vector<OrderBookEntry>& entries)
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

double computePriceSpread(const vector<OrderBookEntry>& entries)
{
    return computeHighestPrice(entries) - computeLowestPrice(entries);
}

int main(int argc, char *argv[])
{
    // example item in order book
    double amount = 0.00020075;
    double price = 0.125;
    string timestamp{"2020/03/17 17:01:24.884492"};
    string product{"BTC/USDT"};
    
    vector<double> prices;
    vector<double> amounts;
    vector<string> timestamps;
    vector<string> products;
    vector<OrderBookType> orderTypes;

    prices.push_back(price);
    amounts.push_back(amount);
    timestamps.push_back(timestamp);
    products.push_back(product);
    orderTypes.push_back(OrderBookType::ask);

    cout << "Price: " << prices[0] << endl;
    cout << "Amount: " << amounts[0] << endl;
    cout << "Timestamp: " << timestamps[0] << endl;
    cout << "Product: " << products[0] << endl;
    printOrderBookType(orderTypes[0]);


    /*  
    while(true)
    {
        // print menu
        printMenu();
        // get user input
        int userInput = getUserOption();
        // process user input
        processUserOption(userInput);
    }
    */

   vector<OrderBookEntry> entries;

   OrderBookEntry obe1(price, amount, timestamp, product, OrderBookType::ask);
    OrderBookEntry obe2(5322222.450228, 0.00021, "2020/04/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid);

    entries.push_back(obe1);
    entries.push_back(obe2);

    for (OrderBookEntry obe : entries)
    {
        cout << "Price: " << obe.price << endl;
        cout << "Amount: " << obe.amount << endl;
        cout << "Timestamp: " << obe.timestamp << endl;
        cout << "Product: " << obe.product << endl;
        printOrderBookType(obe.orderType);
    }

    return 0;
}