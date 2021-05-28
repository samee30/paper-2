#include<iostream>
using namespace std;

int main(){
	int arr[] = {20,22,5,2,6,3,2};
	int j;
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Leaders are: ";
	for(int i=0;i<arrSize;i++){
		for(j=i+1;j<arrSize;j++){
			if(arr[j] > arr[i]){
				break;
			}
		}
		if(j==arrSize){
			cout<<arr[i]<<" ";
		}
	}
}
