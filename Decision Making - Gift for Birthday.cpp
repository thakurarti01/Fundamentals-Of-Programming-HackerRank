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
    if((n%4==0&&n%100!=0)||n%400==0){
        cout<<n<<" is a leap year";
    }else{
        cout<<n<<" is not a leap year";
    }
    return 0;
}
