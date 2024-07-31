#include<iostream>
using namespace std;
int main(){
	float num1,num2;
	int choice;
	cout<<"calculator:"<<endl;
	cout<<"1.Addition:"<<endl;
	cout<<"2.subtraction:"<<endl;
	cout<<"3.multiplication:"<<endl;
	cout<<"4.division:"<<endl;
	cout<<"5.modulus:"<<endl;
	cout<<"enter your choice:"<<endl;
	cin>>choice;
	cout<<"enter the number 1:"<<endl;
	cin>>num1;
	cout<<"enter the number 2:"<<endl;
	cin>>num2;
switch(choice){
	case 1:
	cout<<"the value of addition is"<<(num1 + num2)<<endl;
	break;
	case 2: 
	cout<<"the value of subtraction:"<<(num1 - num2)<<endl;
	break;
	case 3:
	cout<<"the value of multiplication:"<<(num1 * num2)<<endl;
	break;
	case 4:
	cout<<"the value of division:"<<(num1 / num2)<<endl;
	break;
	case 5:
	cout<<"the value of modulus:"<<(int(num1)% int(num2))<<endl;
	}
	return 0;
	}
