#include<iostream.h>
int *bubble(int n,int a[]);
int main(){
	int n,a[1000],i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	bubble(n,a);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
} 
int *bubble(int n,int a[]){
	int i,j,c;
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j-1;i++)
			if(a[i]>a[i+1]){
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
	return a;
}