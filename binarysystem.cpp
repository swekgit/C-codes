#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int num=0; int pow=1;
    while(n>0){
        
       int rem = n%10;
       n= n/10;
      num = num+(pow*rem);
       pow= pow*2;
    }
    return num;
}

int decimalToBinary(int n){
    int ans=0, pow=1;
    while(n>0){
        int rem= n%2;
        n=n/2;
        ans = ans + (pow*rem);
        pow= pow*10;
    }
    return ans;
}
int main(){
    cout<< binaryToDecimal(101010)<< endl;
    cout<< decimalToBinary(8);
    return 0;
}