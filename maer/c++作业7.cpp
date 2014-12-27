#include<iostream.h>
void swap(int *a,int *b);
int main(){
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
} 
void swap(int *a,int *b){
	int c=*a;
	*a=*b;
	*b=c;
}