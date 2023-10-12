#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter num1:";
    cin>>a;
    cout<<"Enter num2:";
    cin>>b;

    int ch;
    cout<<"\nChoose Method to swap: 1.with 3rd variable 2.without 3rd variable 3.using function\n";
    cin>>ch;

    switch(ch){
        case 1:{
            int temp=a;
            a=b;
            b=temp;
            cout<<"a: "<<a<<" b: "<<b;
            break;
        }
        case 2:{
            a=a+b;
            b=a-b;
            a=a-b;
            cout<<"a: "<<a<<" b: "<<b;
            break;
        }
        case 3:{
            swap(a,b);
            cout<<"a: "<<a<<" b: "<<b;            
            break;
        }
        default:
            cout<<"Invalid ip";
            break;
    }

    return 0;
}