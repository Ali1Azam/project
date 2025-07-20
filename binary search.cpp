#include<iostream>
using namespace std;

void simplesearch(int *arr,int l,int r,int val){
    for(int i=0;i<r;i++){
        if(arr[i]==val){
            cout<<"Value is present in the array"<<endl;
            return;
        }
    }
    cout<<"Your value is not present"<<endl;
    return;
}

int binarysearch(int *arr,int l, int r, int val){

    int middle;
    middle = l + (r-l)/2;

    if(r>=l){

        
        if(arr[middle]== val){
            return 1;
        }else if(arr[middle]>val){
            return binarysearch(arr,l,middle-1,val);
        }else{
            return binarysearch(arr,middle+1,r,val);
        }
    }
    return -1;
}

int main(){
    int arr[7] = {1,2,3,4,5,7,10};

    simplesearch(arr,0,7,10);
    simplesearch(arr,0,7,13);

    if(binarysearch(arr,0,7,10)==1) {
        cout<<"Value is present"<<endl;
    }else{
        cout<<"Value is not present"<<endl;
    }
}