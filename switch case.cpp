#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char operation;
	cout<<"enter the num1:";
	cin>>num1;
	cout<<"enter the num2";
	cin>>num2; 
	cout<<"enter the operation:";
	cin>>operation;
switch(operation){
	case'+':
		cout<<num1+num2;
		break;
		case'-':
			cout<<num1-num2;
			break;
			case'*':
			cout<<num1*num2;
			break;
			case'/':
				if(num2==0){
					cout<<"zero";
				}else{
					cout<<num1/num2;
				}
				break;
		        default:
					cout<<"invaild";
					 break;
}
return 0;
}
