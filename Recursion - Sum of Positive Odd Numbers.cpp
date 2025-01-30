#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int arr[],int n)
{
    int sum=0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum = "<<sum(arr,n);
    return 0;
}
