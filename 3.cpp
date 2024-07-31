#include<iostream>
using namespace std;
class average{
public:
	int num1,num2,num3,x;
	void result(){
		x=(num1+num2+num3)/3;
		cout<<"average:"<<x<<endl;
	}
};
int main(){
	int num1,num2,num3;
	cout<<"enter the number 1:";
	cin>>num1;
	cout<<"enter the number 2:";
	cin>>num2;
	cout<<"enter the number 3:";
	cin>>num3;
	average oops;
	oops.num1=num1;
	oops.num2=num2;
	oops.num3=num3;
	oops.result();
	return 0;
}
	

