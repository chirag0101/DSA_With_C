#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size Of Array:";
    
    cin>>size;
    int arr[size];
    cout<<"Enter Array Elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=mid;

    while(start<end){

        if(arr[mid+1]<arr[mid] && arr[mid-1]<arr[mid]){
            ans=mid;
            break;
        }else if(arr[mid-1]>ans){
            end=mid;
            ans=end;
        }else{
            start=mid+1;
            break;
        }
        mid=(start+end)/2;
    }

    cout<<"Pos: "<<ans;

    //1 2 3 2 1
    return 0;
}