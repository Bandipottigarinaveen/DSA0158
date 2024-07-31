#include<iostream>
using namespace std;
void reversearray(int arr[],int size){
	int start=0;
	int end=size-1;
while(start<end){
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
}
int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter the original:";
	for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" "<<endl;
reversearray(arr,size);
cout<<"reverse array:";
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
}
