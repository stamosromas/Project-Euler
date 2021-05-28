#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int f;
	cout<<"Give me the size of the array: ";
	cin>>f;
	if(f%2==0)
		cout<<"Not correct number for array size.";
	else{
	int a[f][f],i,j,m,n,step=2,k=1;
	m=n=f/2;
	a[m][n]=k;
	k++;
	for(i=1; i<=f/2; i++){
		n++;
		a[m][n]=k;
		k++;
		for(j=1; j<=step-1; j++){
			m++;
			a[m][n]=k;
			k++;
		}
		for(j=1; j<=step; j++){
			n--;
			a[m][n]=k;
			k++;
		}
		for(j=1; j<=step; j++){
			m--;
			a[m][n]=k;
			k++;
		}
		for(j=1; j<=step; j++){
			n++;
			a[m][n]=k;
			k++;
		}
		step+=2;
	}
	for(i=0; i<f; i++){
		for(j=0; j<f; j++){
			cout<<setw(3)<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	}
	return 0;
}
