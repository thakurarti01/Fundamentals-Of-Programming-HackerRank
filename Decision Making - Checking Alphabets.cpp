#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"Vowel";
    }else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        cout<<"Consonant";
    }else{
        cout<<"Not an alphabet";
    }
    return 0;
}
