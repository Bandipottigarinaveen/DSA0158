#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enter the number1:"<<endl;
	cin>>num1;
	cout<<"enter the number 2:"<<endl;
	cin>>num2;
	cout<<"before swaping:"<<num1<<"before swaning:"<<num2<<endl;
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	cout<<"after swaping:"<<num1<<"after swap:"<<num2<<endl;
}
