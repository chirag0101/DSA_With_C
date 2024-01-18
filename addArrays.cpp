#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1={1,2,3};
    int size1=v1.size();

    vector<int> v2={8,7};
    int size2=v2.size();

    vector<int> v3;

    int i=size1-1;
    int j=size2-1;
    int sum=0;
    int carry=0;
    int rem=0;

    while(i>=0 && j>=0){
        sum=v1[i--]+v2[j--]+carry;
        rem=sum%10;
        v3.insert(v3.begin(),rem);
        carry=sum/10;
    }

    while(i>=0){
        sum=v1[i--]+carry;
        rem=sum%10;
        v3.insert(v3.begin(),rem);
        carry=sum/10;
    }

    while(j>=0){
        sum=v2[j--]+carry;
        rem=sum%10;
        v3.insert(v3.begin(),rem);
        carry=sum/10;
    }

    for(int k=0;k<v3.size();k++){
        cout<<v3[k]<<" ";
    }

    return 0;
}