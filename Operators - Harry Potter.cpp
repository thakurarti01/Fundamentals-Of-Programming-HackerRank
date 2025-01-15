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
    int a = abs(n)/1000; //finding first digit
    int b = abs(n)%10; //finding last digit
    cout<<a+b;
    return 0;
}
