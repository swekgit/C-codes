#include<iostream>
using namespace std;
 
 int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
    fact *= i;
    }
    return fact;
 }
 int nCr(int n, int r){
    int co_efficient = factorial(n)/(factorial(r)*factorial(n-r));
    return co_efficient;
 }
 int main(){
    cout<< nCr(5,2);
    return 0;
 }