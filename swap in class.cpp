#include<iostream>
using namespace std;
class swaps{
	public:
		int a,b,temp;
		void result()
		{
		temp=a;
		a=b;
		b=temp;
}
};
int main()
{
	int a,b;
	cout<<"enter the number:";
	cin>>a;
	cout<<"enter the number:";
	cin>>b;
	swaps oops;
	oops.a=a;
	oops.b=b;
	oops.result();
	cout<<"after swap:";
	cout<<oops.a<<endl;
	cout<<oops.b<<endl;	
}
