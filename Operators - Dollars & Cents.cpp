#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1, c1, d2, c2;
    cin>>d1>>c1>>d2>>c2;
    int dollar = d1+d2;
    int cent = c1+c2;
    if(cent>=100){
       int extra = cent-100; 
        cout<<dollar+1<<endl;
        cout<<extra;
    }else{
        cout<<dollar<<endl;
        cout<<cent;
    }
    
    return 0;
}
