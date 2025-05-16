// 121. Best Time to Buy and Sell Stock
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
#include<vector>
using namespace std;
vector<int> inputVector(int n){
    vector<int> price ;
    int val;
    for(int i=0;i<n;i++){
        cout << "Enter value of ["<<i<<"] = ";
        cin >> val;
        price.push_back(val);
    }
    return price;
}

int buySell(vector<int> price){
    int maxProfit = 0;
    int bestBuy = price[0];

    for(int i=1;i<price.size();i++){
        if(price[i] > bestBuy){
            maxProfit = max(maxProfit , price[i]-bestBuy);
        }
        bestBuy = min(bestBuy,price[i]);
    }
    return maxProfit;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> price = inputVector(n);
    for(int val : price){
        cout << val << " ";
    }
    int maxProfit =  buySell(price);
    cout << "\nMaximun profit is = " << maxProfit ;
    return 0;
}