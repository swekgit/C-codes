#include<iostream>
using namespace std;

int main(){
    int n;
cout<<"Enter n: ";
cin>> n;
while(n>0){
    int ans=0, pow=1;
int digit= n%10;
n=n/10;
ans += digit*pow;
pow *=10;
cout<<ans;

}
    return 0;
}
