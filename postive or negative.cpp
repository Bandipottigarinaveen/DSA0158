#include<iostream>
using namespace std;
class number{
	public:
		int num;
		void result()
		{
			if(num>0){
				cout<<"number is positive";
			}
			else if(num<0){
				cout<<"number is negative";
			}
			else
			{
			 cout<<"number is equal to zero";
			}
		}
};
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	number oops;
	oops.num=num;
	oops.result();
	return 0;
	}
