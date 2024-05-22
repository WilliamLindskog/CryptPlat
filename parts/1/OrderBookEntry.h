#pragma once

#include <string>

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
        );
        /*{
            this->price = price;
            this->amount = amount;
            this->timestamp = timestamp;
            this->product = product;
            this->orderType = orderType;
        }*/

        double price;
        double amount;
        string timestamp;
        string product;
        OrderBookType orderType;
};