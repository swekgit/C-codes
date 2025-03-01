#include<iostream>
using namespace std;
int sum (int a, int b){
    int s= a+b;
    return s;
}
void printHello() {
    cout<<"HELLO";
}

int sumToN(int n){
    sum =0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){

printHello();
cout<< "\n" << sum(10,5) <<endl;
cout << sumToN(10) << endl;
    return 0;
}