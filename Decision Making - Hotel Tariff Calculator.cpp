#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int month, rent, day;
    cin>>month>>rent>>day;
    // if((1<=month<=3)||7<=month<=10){
    //     cout<<rent*day;
    // }else if((4<=month<=6)||month==11||month==12){
    //     int tarrif = (20*rent)/100;
    //     int neww = rent+tarrif;
    //     cout<<neww*day;
    // }else{
    //     cout<<"Invalid";
    // }
    int tarrif = (20*rent)/100;
    int neww = rent+tarrif;
    
    switch(month){
        case 1:
        case 2:
        case 3:
        case 7:
        case 8:
        case 9:
        case 10:
            cout<<rent*day;
            break;
        case 4:
        case 5:
        case 6:
        case 11:
        case 12:
            cout<<neww*day;
            break;
        default:
            cout<<"Invalid Input";
    }
    return 0;
}
