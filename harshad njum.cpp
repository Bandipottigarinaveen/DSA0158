#include<iostream>
using namespace std;
class arshad{
	public:
		int num;
		bool isharshad(){
			int sum=0;
			int temp= num;
			while(temp>0){
				sum=temp%10;
				temp/=10;
			}
			return(num%sum==0);
		}
		void result(){
			if(isharshad()){
		cout<<num<<"is harshad"<<endl;
		}else{
			cout<<num<<"is not harshad"<<endl;
		}
	}
};
int main(){
	int n;
	cout<<"enter the numbeer:";
	cin>>n;
	arshad oops;
	oops.num=n;19
	oops.result();
}
