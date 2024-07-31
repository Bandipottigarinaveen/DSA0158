#include<iostream>
using namespace std;
class op{
	public:
		float a,b,sum,diff,mul,div;
		int mod;
		void result()
		{
			sum=a+b;
			diff=a-b;
			mul=a*b;
			div=a/b;
			mod = int(a)%int(b);
		}
};
int main()
{
	float a,b;
	cout<<"enter the number:";
	cin>>a;
	cout<<"enter th number:";
	cin>>b;
	op oops;
	oops.a=a;
	oops.b=b;
	oops.result();
	cout<<"addition"<<oops.sum<<endl;
	cout<<"subtraction"<<oops.diff<<endl;
	cout<<"multipication"<<oops.mul<<endl;
	cout<<"division"<<oops.div<<endl;
	cout<<"modulus"<<oops.mod<<endl;
	return 0;
}
