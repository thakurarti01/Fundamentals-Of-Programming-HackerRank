#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int p,r,t,d;
    cin>>p>>r>>t>>d;
    //cout<<float(r)<<endl;
    float inte = (p*r*t)/100;
    cout<<fixed<<setprecision(2)<<inte<<endl;
    cout<<float(p+inte)<<endl;
    float rel = (inte*2)/100;
    cout<<rel<<endl;
    cout<<(p+inte-rel);
    
    return 0;
}
