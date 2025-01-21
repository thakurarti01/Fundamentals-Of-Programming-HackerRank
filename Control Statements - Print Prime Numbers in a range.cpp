#include<iostream>
using namespace std;
int main(){
    // bool flag = true;
    int n; 
    cin>>n;
    //int j = 2;
    for(int i = 2; i<=n; i++)
    {
        bool flag = true;
        
        for(int j=2; j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<i<<" ";
    }
    return 0;
    
}