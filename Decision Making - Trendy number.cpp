#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    if((n>=100)&&(n<=999)){
        int quo = n/10;
        int rem = quo%10;
        //int mid = (n / 10) % 10;
        if(rem%3==0){
            cout<<"Trendy Number";
        }else{
            cout<<"Not a Trendy Number";
        }
    }else{
        cout<<"Invalid Number";
    }
    return 0;
}
