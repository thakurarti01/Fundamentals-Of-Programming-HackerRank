#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int base, expo;
    cin>>base>>expo;
    int res= pow(base,expo);
    cout<<"The value of "<<base<<" power "<<expo<<" is "<<res;
    return 0;
}
