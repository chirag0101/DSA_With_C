#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr={10,20,30,50,40};
  for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  int m=3;
  int i=m;
  int j=arr.size()-1;
//   std::cout<<j;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}