#include <iostream>
using namespace std;

int dig_counter(int n){
	int tot=0;
	while(n!=0)
		tot++;
	return tot;	
}

int main(){
	int n;
	cout<<"Enter a number to check whether it is pandigital: ";
	cin>>n;
	int a[dig_counter(n)],i,k;
	k=n;
	for(i=0; i<dig_counter(n); i++){
		a[i]=k%10;
		k/=10;
	}
	int max=a[0];
	for(i=1; i<dig_counter(n); i++){
		if(a[i]>max)
			max=a[i];
		}
	int j,tot;
	for(j=0; j<dig_counter(n); j++){
		tot=0;
		for(i=max; i>=1; i--)
			if(a[j]!=0)
				tot++;
		if(tot==max){
			tot=-1;
			break;
		}
					
	}
	if(tot==-1)
		cout<<"Not pandigital.";
	else
		cout<<"Pandigital.";			
	return 0;
}
