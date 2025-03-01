#include<iostream>
using namespace std;
 int main()
 {  
    char b;
 
 	cout<< "\nenter character : ";
 	cin>> b;
 	
 	if (b>=97 &&  b<=102){
 		cout<<"number is lowercase";
	 }
	 else if (b>=65 && b<=90)
	 {
	 	cout<<"number is uppercase";
	 }
    
    return 0;
 }