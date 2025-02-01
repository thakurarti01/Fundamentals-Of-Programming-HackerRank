#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,at,num;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cin>>at>>num;
    
    if(at>n||at<0)
    {
        cout<<"Invalid Input";
        return 0;
    }
    
    arr.insert(arr.begin()+at-1,num);
    
    cout<<"Array after insertion is"<<endl;
    for(int i: arr)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
