#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count_digits(int num)
{
    if(num==0)
        return 1;
    int count = 0;
    num=abs(num);
    while(num>0)
    {
        num=num/10;
        count++;
        
    }
    return count;
}
int main() {
    int num;
    cin>>num;
    int res = count_digits(num);
    cout<<"The number of digits in "<<num<<" is "<<res;
    return 0;
}
