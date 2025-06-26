#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Give 5 arr input"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    cout<<"Print Array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Print Array in Reverse"<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}