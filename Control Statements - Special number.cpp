#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n;
    cin>>m>>n;
    for(int i = m; i<=n;i++){
        int one = i%10;
        int two = i/10;
        int sum = one+two;
        int mul = one*two;
        if(i==(sum+mul)){
            cout<<i<<endl;
        }
    }
    return 0;
}
