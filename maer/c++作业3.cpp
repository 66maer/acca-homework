#include<iostream.h>
int main(){
	int a;
	cin>>a;
	if((a%3&&!(a%5))||(!(a%3)&&a%5))
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl; 
} 