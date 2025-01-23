#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,counter=0;
    //int new_num;
    cin>>n;
    cout<<n<<endl;
    while(n>1)
    {
        counter++;
        if(n%2==0)
        {
            n=n/2;
            cout<<n<<endl;
            
        }else{
            n=3*n+1;
            cout<<n<<endl;
        }
        
    }
    cout<<counter;
    return 0;
}
