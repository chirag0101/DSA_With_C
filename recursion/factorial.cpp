#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    
    return n*fact(n-1);
}

int main(){
    int ip;
    cout<<"Enter a Num:";
    cin>>ip;

    int ans=fact(ip);

    cout<<ans<<endl;

    return 0;
}