#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s1, s2;
    cin>>s1>>s2;
    int arr1[s1], arr2[s2];
    int sum1=0;
    int sum2=0;
    for(int i =1; i<=s1;i++){
        cin>>arr1[i];
    }
    for(int i =1; i<=s1;i++){
        sum1+=arr1[i];
    }
    for(int i =1; i<=s2;i++){
        cin>>arr2[i];
    }
    for(int i =1; i<=s2;i++){
        sum2+=arr2[i];
    }
    
    if((s1==s2)&&(sum1==sum2)){
        cout<<"Same";
    }else{
        cout<<"Not Same";
    }
    return 0;
}
