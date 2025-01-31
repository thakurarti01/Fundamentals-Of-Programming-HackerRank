#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int getMax(int arr[], int n)
{
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++)
    {
            maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    //cout<<maxi;
    int res = getMax(arr,n);
    cout<<"Maximum element in the array is "<<res<<endl;
    return 0;
}
