#include <iostream>
using namespace std;

int ab(int a,int b){
	int k=a-b;
	return(k>0?k:-k);
}

int main(){
	int n;
	cout<<"Give me the size of the array: ";
	cin>>n;
	int i,j,a[n][n],sum1=0,sum2=0;
	for(i<0; i<n; i++){
		for(j=0; j<n; j++){
			cin>>a[i][j];
			if(i==j)
				sum1+=a[i][j];
		}
	}
	for(i=0; i<n; i++)
		sum2+=a[i][n-i-1];
	cout<<ab(sum1,sum2)<<endl;
	return 0;	
}
