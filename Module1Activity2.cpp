// Tahlia Callegari
// 2428774
// COP2220 Fall 2020

#include <iostream> 
using namespace std;

int main()
{
    // Constant variables
    unsigned int stock;
    double price, salePrice, commission;

    stock = 1000;
    price = 45.5;
    salePrice = 56.9;
    commission = 0.02;

    //Calculated variables
    double initalStockCost = stock * price; //calculate stock expense
    double initalBrokerCost = initalStockCost * commission; //calculate intial broker cost
    double stockRevenue = stock * salePrice; //calculate stock revenue
    double finalBrokerCost = stockRevenue * commission; //calculate post-sale broker commission
    double netStockProfit = stockRevenue - (initalBrokerCost + finalBrokerCost + initalStockCost); //calculate stock profit or loss

    //Display transactions

    cout << "Inital Stock Cost: " << initalStockCost
        << "\nInital Broker Cost: " << initalBrokerCost
        << "\nStock Revenue: " << stockRevenue
        << "\nFinal Broker Cost: " << finalBrokerCost
        << "\nNet Profit: " << netStockProfit;

    return 0;
}
