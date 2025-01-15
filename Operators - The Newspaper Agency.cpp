#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c;
    cin>>a>>b>>c;
    int sell = a*b;
    int cost = a*c;
    cout<<(sell-cost)-100;
    return 0;
}
