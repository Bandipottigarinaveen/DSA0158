#include<iostream>
using namespace std;
class great{
	public:
	int num1,num2;
	void desplay(){
		if(num1>num2){
			cout<<num1<<"is greater"<<endl;
		}else if(num1<num2){
			cout<<num2<<"is greater"<<endl;		
		}
		else{
			cout<<"invaild";
		}
			}
};
int main(){
	int n1,n2;
	cout<<"enter the number:"<<endl;
	cin>>n1;
	cout<<"enter the number2:"<<endl;
	cin>>n2;
	great oops;
	oops.num1=n1;
	oops.num2=n2;
	oops.desplay();
	return 0;
}
