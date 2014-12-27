#include<iostream.h>
int main(){
	float a;
	cin>>a;
	if(a-2>0)
		cout<<int(a-1.0001)*3+5<<endl;
	else
		cout<<"5"<<endl;
} 