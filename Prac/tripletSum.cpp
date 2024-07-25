#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10,5,5,5,2};
    vector<vector<int>> ans;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if((arr[i]+arr[j]+arr[k])==12){
                    // cout<<arr[i]<<" "<<arr[j]<<" "<<alrr[k]<<endl;
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                    break;
                }
            }
        }
    }

    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans.size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}