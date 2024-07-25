//	while rotating an array 1st reverse from which part you want to rotate and then reverse the rest part and then reverse the whole array
//	ex:	1,2,3,4,5,6
//	k:2  rotate by 2
//		4,3,2,1		6,5
//	now reverse the array
//	5,6,1,2,3,4

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

//for vector
/*
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // k = k%n;
        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin(), nums.begin() + k);
        // reverse(nums.begin() + k , nums.end());
        
        //OR

        vector<int> temp(nums.size());

        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];            //this gives position at which the num should be shifted
        }

        nums=temp;
    }
*/
