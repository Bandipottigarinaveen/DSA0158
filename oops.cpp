#include<iostream>
using namespace std;
class cal{
	public:
	int n;
	int  disaly()
	{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
}
};
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	cal oops;
	oops.n=n;
	oops.disaly();
	return 0;
	
}
