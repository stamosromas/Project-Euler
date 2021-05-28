#include <iostream>
#include <iomanip>
using namespace std;

int total_digits(int n){
	int  tot=0;
	while(n!=0){
		n/=10;
		tot++;
	}
	return tot;
}

int main(){
	int n;
	cout<<"Enter please the size of the array: ";
	cin>>n;
	if(n%2==0||n<=0)
		exit(0);
	else{
		int a[n][n],step=2,i,j,k,l,p=1;
		i=j=n/2;
		a[i][j]=p;
		p++;
		for(k=1; k<=n/2; k++){
			j++;
			a[i][j]=p;
			p++;
			for(l=1; l<=step-1; l++){
				i++;
				a[i][j]=p;
				p++;
			}
			for(l=1; l<=step; l++){
				j--;
				a[i][j]=p;
				p++;
			}
			for(l=1; l<=step; l++){
				i--;
				a[i][j]=p;
				p++;
			}
			for(l=1; l<=step; l++){
				j++;
				a[i][j]=p;
				p++;
			}
		step+=2;
		}
	int si;
	si=total_digits(n*n);
	for(k=0; k<n; k++){
		for(l=0; l<n; l++)
			cout<<setw(si)<<a[k][l]<<" ";
		cout<<endl;	
	}		
	}	
	
	return 0;
}
