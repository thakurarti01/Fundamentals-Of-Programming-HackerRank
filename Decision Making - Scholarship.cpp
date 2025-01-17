#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int age, year, income, re;
    cin>>age>>year>>income>>re;
    float score, att;
    cin>>score>>att;
    if((age>=18&&age<21) && (year>=2021) && (income<200000) && (re<=2) && (score>=60) && (att>=80)){
        cout<<"Eligible";
    }else if((age>=18&&age<21) && (year>=2021) && (income<200000) && (re>2) && (score>80) && (att>=90)){
        cout<<"Eligible";
    }else if((age>=18&&age<21) && (year>=2021) && (income >= 200000&&income < 250000) && (re>2) && (score>=60) && (att>=80)){
        cout<<"Partially Eligible";
    }else{
        cout<<"Not Eligible";
    }
    return 0;
}
