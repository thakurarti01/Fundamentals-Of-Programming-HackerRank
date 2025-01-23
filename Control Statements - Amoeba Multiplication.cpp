#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, next, last;
    cin>>n;
    
    int first = 0;
    int sec = 1;
   // cout<<first<<" "<<sec;
    //int sum = first+sec;
    for(int i=2;i<n; i++){
       next=first+sec;
        //cout<<next;
        first=sec;
        sec=next;
        last=sec;
        //cout<<next;
    }
    cout<<sec;
    return 0;
}
