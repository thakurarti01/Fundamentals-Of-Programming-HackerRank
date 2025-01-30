#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<"The term "<<n<<" in the Fibonacci series is "<<fib(n);
        
    
    
    return 0;
}
