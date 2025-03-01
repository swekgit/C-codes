#include<iostream>
using namespace std;

int min(int a, int b){
    if (a>b){
        cout<<b<<" is minimum"<< endl;
    }
    else if (b>a){
        cout<<a<<" is minimum" <<endl;
    }
    else {cout<<"Both are equal";}
}


int sumToN(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int factorial(int a){
    int fact=1;
    for(int i=1; i<=a; i++){
        fact *= i;
    }
    return fact;
}


int main(){
//    cout<< min(7,7);
   cout << sumToN(10) << endl;
   cout << sumToN(100) << endl;
   cout << factorial(4) << endl;
   cout << factorial(5) << endl;

   return 0;
}