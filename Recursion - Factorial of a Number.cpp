#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int n)
{
    int mul=1;
    while(n>0)
    {
        mul*=n;
        n--;
    }
    return mul;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}
