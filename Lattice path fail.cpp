#include <iostream>
using namespace std;

int main(){
	int i,j;
	unsigned int a[20][20];
	unsigned long long int sum=0;
	a[0][0]=0;
	for(i=1; i<20; i++){
		a[0][i]=1;
		a[i][0]=1;
	}
	for(i=1; i<20; i++){
		for(j=1; j<20; j++){
			if(i!=j){
				a[i][j]=a[i][j-1]+a[i-1][j];
				a[j][i]=a[i][j];
				sum+=a[i][j];
			}
			else{
				a[i][j]=a[i][j-1]+a[i-1][j];
				sum+=a[i][j];
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
