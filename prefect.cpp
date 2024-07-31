#include<iostream>
using namespace std;
class honey{
	public:
		int n;
		void result(){
			if(n==2){
				cout<<"perfect number";
			}else{
				cout<<"not perfect number:";
			}
		}
};
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	honey oops;
	oops.n=num;
	oops.result(); 
}
