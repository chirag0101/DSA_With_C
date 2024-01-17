#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,0,12,0,13,0,14,0};

    int size=sizeof(arr)/sizeof(arr[0]);
    
    int i=0,j=0;

    while(j<size && i<size){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }else{
            i++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}