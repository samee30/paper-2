#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	int sp = n-1;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		for(int k=0;k<sp;k++){
			cout<<" ";
		}
		cout<<" ";
		for(int l=0;l<sp;l++){
			cout<<" ";
		}
		for(int m=0;m<=i;m++){
			cout<<"*";
		}
		cout<<endl;
		sp--;
	}
	
	sp = 0;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		for(int k=0;k<sp;k++){
			cout<<" ";
		}
		cout<<" ";
		for(int l=0;l<sp;l++){
			cout<<" ";
		}
		for(int m=0;m<=i;m++){
			cout<<"*";
		}
		cout<<endl;
		sp++;
	}
	
	
}
