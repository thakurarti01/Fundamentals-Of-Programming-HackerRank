#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int year,  month;
    cin>>year>>month;
    if((year>=1900&&year<=9999&&month>=1&&month<=12)){
        switch(month){
            case 1:
                cout<<31<<" Days";
                break;
            case 2:
                if((year%4==0&&year%100!=0)||year%400==0){
                    cout<<29<<" Days";
                }else{
                    cout<<28<<" Days";
                }
                break;
            case 3:
                cout<<31<<" Days";
                break;
            case 4:
                cout<<30<<" Days";
                break;
            case 5:
                cout<<31<<" Days";
                break;
            case 6:
                cout<<30<<" Days";
                break;
            case 7:
                cout<<31<<" Days";
                break;
            case 8:
                cout<<31<<" Days";
                break;
            case 9:
                cout<<30<<" Days";
                break;
            case 10:
                cout<<31<<" Days";
                break;
            case 11:
                cout<<30<<" Days";
                break;
            case 12:
                cout<<31<<" Days";
                break;
            default:
                cout<<0;
        }
    }else{
            cout<<0;        
        }
    
    
    
    
    
    

    return 0;
}
