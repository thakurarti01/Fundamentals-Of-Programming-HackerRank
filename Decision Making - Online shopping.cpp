#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int f_price,f_dis,f_ship,s_price,s_dis,s_ship,a_price,a_dis,a_ship;
    cin>>f_price>>f_dis>>f_ship>>s_price>>s_dis>>s_ship>>a_price>>a_dis>>a_ship;
    int f_new = (f_dis*f_price)/100;
    int f_final = (f_price-f_new)+f_ship;
    cout<<"In Flipkart: Rs."<<f_final<<endl;
    int s_new = (s_dis*s_price)/100;
    int s_final = (s_price-s_new)+s_ship;
    cout<<"In Snapdeal: Rs."<<s_final<<endl;
    int a_new = (a_dis*a_price)/100;
    int a_final = (a_price-a_new)+a_ship;
    cout<<"In Amazon: Rs."<<a_final<<endl;
    if(f_final<s_final&&f_final<a_final){
        cout<<"Choose Flipkart";
    }else if(s_final<f_final&&s_final<a_final){
        cout<<"Choose Snapdeal";
    }else if(a_final<s_final&&a_final<f_final){
        cout<<"Choose Amazon";
    }else if((f_final)==(s_final)==(a_final)){
        cout<<"Choose Flipkart";
    }else if(f_final==s_final||f_final==a_final){
        cout<<"Choose Flipkart";
    }else if(s_final==a_final){
        cout<<"Choose Snapdeal";
    }
    else{
        cout<<"Choose Amazon";
    }
    
    return 0;
}
