#include<iostream>
using namespace std;
int fibrec(int n){
	if(n<=1){
		return n;
	}
	return fibrec(n-1)+fibrec(n-2);
}
void fibseries(int n){
	for(int i=0;i<n;i++){
		cout<<fibrec(i)<<" ";
	}
}
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	fibseries(num);
	return 0;
}
