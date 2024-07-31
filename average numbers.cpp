#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	double average;
	cout<<"enter the number1:";
	cin>>n1;
	cout<<"enter the number2:";
	cin>>n2;
	cout<<"enter the number 3:";
	cin>>n3;
	average=static_cast<double>(n1+n2+n3)/3;
	cout<<average;
	
}
