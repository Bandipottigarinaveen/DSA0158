#include<iostream>
using namespace std;
class average{
	public:
		int num1,num2,num3,x;
		void result()
		{
			x=(num1+num2+num3)/3;
		cout<<"average:"<<x;
	}
};
int main()
{
	int n1,n2,n3;
	cout<<"enter the number:";
	cin>>n1;
	cout<<"enter the number:";
	cin>>n2;
	cout<<"enter the number:";
	cin>>n3;
	average oops;
	oops.num1=n1;
	oops.num2=n2;
	oops.num3=n3;
	oops.result();
	return 0;
	}
