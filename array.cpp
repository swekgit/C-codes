#include<iostream>
using namespace std;

int main(){
    // int marks[5]={34,67,89,66,85};
    // marks[1]=88;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<"size of array: "<<sizeof(marks)<<endl;
    int size=5;
    int marks[size];
    for(int i=1; i<=size;i++){
        cin>>marks[i];
    }
    for(int i=1;i<=size;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}