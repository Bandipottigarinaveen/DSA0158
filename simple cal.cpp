#include<iostream>
using namespace std;
int main(){
	double num1,num2;
	char operation;
	cout<<"enter the number1:";
	cin>>num1;
	cout<<"enter the number2:";
	cin>>num2;
	cout<<"enter the operator:";
	cin>>operation;
	switch (operation){
	case'+':
	cout<<"result:"<<num1+num2<<endl;
	break;
	case'-':
		cout<<"result:"<<num1-num2<<endl;
		break;
		case'*':
			cout<<"result"<<num1*num2<<endl;
			break;
			case'/':
				if(num2!=0){
					cout<<"result:"<<num1/num2<<endl;
				}else{
					cout<<"error"<<endl;
				}
				break;
				default:
					cout<<"error or invaild number not entred"<<endl;
					break;
					return 0;
				}
			}
