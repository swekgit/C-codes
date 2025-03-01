#include<iostream>
using namespace std;

int main(){

    int size=6;
    int marks[]={8, 6,9,-9,77,99};
    // cout<<"enter array of 6:";
    // for(int i=1;i<=size;i++){
    //     cin>>marks[i];
    // }

    int smallest = INT8_MAX;
    for(int i=1;i<=size;i++){
        if(marks[i] < INT8_MAX){
            smallest = marks[i];
        }
    }
    int largest=INT8_MIN;

    for(int i=1; i<=size;i++){
       if(marks[i]>INT8_MIN){
        largest= max(marks[i], largest);
       }
    }
    cout<<"smallest value: "<<smallest;
    cout<<" largest value: "<<largest;
    return 0;
}