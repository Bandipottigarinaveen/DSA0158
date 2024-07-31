#include<iostream>
using namespace std;
class number{
	public:
	int num1,num2;
	int result(){
		if(num1==num2){
			cout<<"equal"<<endl;
		}
		else{
			cout<<"not equal:";
		}
	}
};
int main(){
	int num1,num2;
	cout<<"enter the number1:"<<endl;
	cin>>num1;
	cout<<"enter the number2:"<<endl;
	cin>>num2;
	number oops;
	oops.num1=num1;
	oops.num2=num2;
	oops.result();
	return 0;
}
