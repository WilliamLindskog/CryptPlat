#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "merkelmain.h"

using namespace std;
//enum class OrderBookType { bid, ask };

//int main(int argc, char *argv[])
int main()
{
    
    MerkelMain mm{};
    mm.init();

}
    /*
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
    */