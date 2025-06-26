#include<iostream>
using namespace std;
void minandmax(int *arr, int *min, int *max){
    int large = arr[0];
    int small = arr[0];

    for(int i=0;i<6;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }

    for(int i=0;i<6;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }

    *max=large;
    *min=small;
    cout<<"MIN: "<<*min<<" "<<"MAX: "<<*max << endl;
}

int main(){

    int arr[6];
    int min,max;

    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    for(int i=0;i<6;i++){
        cout<<arr[i];
    }

    minandmax(arr,&min,&max);
}
