#include<iostream.h>
#include<math.h>
int main(){
	int a,b,i;
	cin>>a;
	b=sqrt(int(a));
	for(i=2;i<=b;i++)
		if(a%i==0)b=0;
	b?cout<<"yes"<<endl:cout<<"no"<<endl;
} 