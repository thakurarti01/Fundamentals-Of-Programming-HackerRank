#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,sum=0;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        sum+=arr[i];
        
    }
    cout<<sum;
    return 0;
}
