#include <iostream>

int main ()
{
    int arr[]={1,1,2,3,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            continue;
        }else{
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    arr[i]=-arr[i];
                    arr[j]=-arr[j];
                }
            }
        }
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]>0)
            std::cout<<arr[i]<<" ";
    }
    
  return 0;
}