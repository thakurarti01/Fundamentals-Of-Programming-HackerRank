#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,i,location,insert;
    
    cin>>size;
    int arr[size+1];
    
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cin>>location;
    cin>>insert;
    
    location--; //Adjusting for Zero-Based Indexing:
    
    if(location>size||location<0){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    
    for (i = size; i > location; i--) {
    arr[i] = arr[i - 1];
    }
    
    arr[location] = insert;
    size++;
    
    cout<<"Array after insertion is"<<endl;
    for(i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
