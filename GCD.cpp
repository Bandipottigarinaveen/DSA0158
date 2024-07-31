#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int n1,n2;
	cout<<"enter the two number:";
	cin>>n1>>n2;
	if(n1<n2){
		swap(n1,n2);
	}
	int result=gcd(n1,n2);
	cout<<result;
	return 0;
}
