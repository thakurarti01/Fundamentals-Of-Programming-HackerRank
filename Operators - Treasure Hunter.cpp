#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float coin, ben, black;
    cin>>coin>>ben>>black;
    float coin_ben = floor((ben/100)*coin);
    cout<<(coin_ben)<<endl;
    float rem1 = coin-coin_ben;
    float coin_black = floor((black/100)*rem1);
    cout<<(coin_black)<<endl;
    float rem2 = rem1-coin_black;
    float pirate = rem2/3;
    cout<<floor(pirate);
    
    return 0;
}
