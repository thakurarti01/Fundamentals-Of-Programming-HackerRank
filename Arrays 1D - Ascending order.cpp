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
    //taking vactor array
    vector<int>arr(n);
    //input
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    //sorting
    sort(arr.begin(),arr.end());
    //output
    cout<<"The Sorted array is:"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
