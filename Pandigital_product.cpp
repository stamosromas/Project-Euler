#include <iostream>
using namespace std;

int is_pan(int m,int n,int p){
	int arr[9],i,j=0;
	int b[3]={m,n,p};
	for(i=0; i<3; i++){
		while(b[i]!=0){
			arr[j]=b[i]%10;
			b[i]/=10;
			j++;
		}
	}
	for(i=1; i<9; i++)
		for(j=0; j<i; j++)
			if(arr[i]==arr[j])
				return 0;
	return 1;
}

int main(){
	int m,n,p;
	cout<<"Give me the two numbers that are multiplied: ";
	cin>>m>>n;
	p=m*n;
	cout<<"The product is: "<<p<<endl;
	if(is_pan(m,n,p)==1)
		cout<<"The set of 3 numbers is pandigital.";
	else
		cout<<"The set of 3 numbers isn't pandigital.";
}








