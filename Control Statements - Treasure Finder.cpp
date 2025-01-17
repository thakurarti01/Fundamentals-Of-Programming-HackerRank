#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int first,sec,third;
    cin>>first>>sec>>third;
    if(first>sec&&first<third){
        cout<<"The treasure is in the box which has the number "<<first<<endl;
    }else if(sec>first&&sec<third){
        cout<<"The treasure is in the box which has the number "<<sec<<endl;
    }else{
        cout<<"The treasure is in the box which has the number "<<third<<endl;
    }
    
    int minn = min(min(first,sec),third);
    int hcf;
    for(int i = 1; i<=minn; i++){
        if(first%i==0 && sec%i==0 && third%i==0){
            hcf = i;
        }
    }
    cout<<"The code to open the box is "<<hcf;
    return 0;
}
