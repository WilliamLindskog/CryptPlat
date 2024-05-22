#pragma once

#include <iostream>
#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{
    public: 
        MerkelMain();

        /** Call this to start the simulation. */
        void init();

    private:

        void loadOrderBook();

        void printHelp();

        void printExchangeStatistics();

        void printMakeAnOffer();

        void printMakeABid();

        void printWallet();

        void printContinue();

        void printMenu();

        int getUserOption();

        // function that recieves user option 
        void processUserOption(int userInput);

        //void printOrderBookType(OrderBookType type);

        //double computeAveragePrice(const vector<OrderBookEntry>& entries);

        //double computeLowestPrice(const vector<OrderBookEntry>& entries);

        //double computeHighestPrice(const vector<OrderBookEntry>& entries);

        //double computePriceSpread(const vector<OrderBookEntry>& entries);

        // example item in order book
        std::vector<OrderBookEntry> entries;

};