#include<iostream>
using namespace std;
int main(){
    // int marks;
    // cout<<"Enter Marks"<<endl;
    // cin>>marks;
    // if(marks>90){
    //     cout<<"A";
    // }else if( marks>80){
    //     cout<<"B";
    // }else if( marks>70){
    //     cout<<"C";
    // }else if(marks>60){
    //     cout<<"D";
    // }else if( marks>50){
    //     cout<<"E";
    // }else{
    //     cout<<"Fail";
    // }


    int a;
    cin>>a;
    switch(a){
        case 1:
            cout<<"Value is 1";
            break;
        case 2:
            cout<<"Value is 2";
            break;
        default:
            cout<<"Value is greater than 2";
    }
}