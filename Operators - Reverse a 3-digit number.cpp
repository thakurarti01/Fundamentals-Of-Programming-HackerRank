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
    int last = n%10;
    int q1 = n/10;
    int mid = q1%10;
    int first = q1/10;
    cout<<last<<mid<<first;
    return 0;
}
