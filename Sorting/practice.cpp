#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,2,1};

    for(int i=0;i<5;i++){
        int small=arr[i];
        for(int j=i+1;j<5;j++){
            if(arr[j]<small){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}