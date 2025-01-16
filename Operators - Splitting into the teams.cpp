#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    cin>>a>>b;
    int team = a/b;
    int left = a%b;
    cout<<"The number of friends in each team is "<<team<<" and left out is "<<left;
    return 0;
}
