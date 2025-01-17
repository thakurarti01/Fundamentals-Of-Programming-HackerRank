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
    int arr[n];
    int odd=0,even=0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]%2==0){
            even+=arr[i];
            
        }else{
            odd+=arr[i];
            
        }
    }
    cout<<"The sum of the even numbers in the array is "<<even<<endl;
    cout<<"The sum of the odd numbers in the array is "<<odd;
    return 0;
}
