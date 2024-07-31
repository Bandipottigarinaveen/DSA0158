#include<iostream>
using namespace std;
class person{
	protected:
		float salary;
		public:
			void getdata(){
				cout<<"enter the salary:";
				cin>>salary;
			}
			void displaydata()const{
			cout<<"salary:"<<salary<<endl;
			}
			virtual float bouns()const=0;
};
class master:public person{
	public:
		float bouns()const override{
		return salary*1.10;
	}
};
int main(){
	master m;
	m.getdata();
	m.displaydata();
cout<<"bouns:"<<m.bouns()<<endl;
}
