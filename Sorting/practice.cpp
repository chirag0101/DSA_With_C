#include<iostream>
using namespace std;

int main(){
    int arr[]={6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

        int j=i;
            while(arr[j]<arr[j-1] && j>0){
                    swap(arr[j],arr[j-1]);
                    j--;
            }

    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
    cout<<"\n";


    }

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}
