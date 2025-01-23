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
    int ld, mul,sum=0,i; //cannot initialize mul=1 outside the while loop because the value 1 will be treated as global var
    int temp=n;
    while(n>0){
        mul=1;
        ld=n%10;
        for(i = ld; i>=1; i--){
            mul*=i;
            
        }
        sum+=mul;
        n=n/10;
    }
        if(sum==temp){
            cout<<"Yes";
            
        }else{
            cout<<"No";
            
        }
    
    return 0;
}
