#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float mid1 = (x1+x2)/2;
    float mid2 = (y1+y2)/2;
    cout<<"Arun's house is located at("<<fixed<<setprecision(1)<<mid1<<","<<mid2<<")";
    
    return 0;
}
