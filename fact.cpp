#include<iostream>
using namespace std;
int factorial(int n){
if(n<=1){
	return 1;
}
return n*factorial(n-1);
}
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	int result=factorial(num);
	cout<<result<<endl;
	return 0;
}
