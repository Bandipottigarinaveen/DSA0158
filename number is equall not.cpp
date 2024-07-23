#include<iostream>
using namespace std;
class compare{
	public:
		int num1,num2;
		void result()
		{
			if(num1==num2)
			{
				cout<<"number is equall";
			}
			else{
				cout<<"number is not equall";
			}
		}
};
int main()
{
	int n1,n2;
	cout<<"enter the number";
	cin>>n1;
	cout<<"enter the second nummber";
	cin>>n2;
	compare oops;
	oops.num1=n1;
	oops.num2=n2;
	oops.result();
	return 0;
	}
