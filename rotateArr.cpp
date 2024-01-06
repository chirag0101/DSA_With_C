#include<iostream>
using namespace std;

int main(){

	int k;
	cout<<"Enter K:";
	cin>>k;
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	int arr[size];
	cout<<"Enter Elements:";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	int i=size-k;
	int j=size-1;

	int a=0;
	int b=i-1;

	while(a<b){
		if(i<j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		int temp=arr[a];
		arr[a]=arr[b];
		arr[b]=temp;
		a++;
		b--;
	}

	i=0;
	j=size-1;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}


	cout<<"New Array:";
	for(int x=0;x<size;x++){
		cout<<arr[x]<<" ";
	}


	return 0;
}
