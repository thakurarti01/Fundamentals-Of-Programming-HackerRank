#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int l,b;
    cin>>l>>b;
    cout<<"The required length is "<<(2*(l+b))<<" m"<<endl;
    cout<<"The required area of carpet is "<<(l*b)<<" sqm"<<endl;
    return 0;
}
