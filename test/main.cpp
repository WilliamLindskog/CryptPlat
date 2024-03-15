#include <iostream>

using namespace std;


int main() {
    while(true){
        // 1. Print help
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
        cout << "Type in 1 - 6" << endl;

        int UserInput;
        cin >> UserInput;
        cout << "You entered: " << UserInput << endl;

        if(UserInput == 0){ // bad input
            cout << "Exiting" << endl;
            return 0;
        } // exit
        if(UserInput == 1){
            cout << "Help - Your aim is to make money. Analyze the market, make bids and profits." << endl;
        } 
        if(UserInput == 2){
            cout << "Exchange Statistics - Print the current exchange statistics." << endl;
        }
        if(UserInput == 3){
            cout << "Make an offer - Enter the amount of currency you want to sell and the price you want to sell it at." << endl;
        }
        if(UserInput == 4){
            cout << "Make a bid - Enter the amount of currency you want to buy and the price you want to buy it at." << endl;
        }
        if(UserInput == 5){
            cout << "Print Wallet - Print the current wallet." << endl;
        }
        if(UserInput == 6){
            cout << "Continue - Continue the simulation." << endl;
        }
    }

    return 0;
}