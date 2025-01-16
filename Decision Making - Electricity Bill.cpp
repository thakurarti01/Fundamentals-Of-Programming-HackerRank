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
    if(n>0&&n<=200){
        cout<<"Rs."<<int(n*0.5);
    }
    else if(n>200&&n<=400){
        cout<<"Rs."<<int(n*0.65+100);
    }else if(n>400&&n<=600){
        cout<<"Rs."<<int(n*0.80+200);}
   else{
        cout<<"Rs."<<int(n*1.25+425);
    }
    return 0;
}
