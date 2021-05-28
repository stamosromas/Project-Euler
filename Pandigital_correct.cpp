#include <iostream>
using namespace std;

int total_digits(int n){
	int tot=0;
	while(n!=0){
		n/=10;
		tot++;
	}
	return tot;
}

int max_digit(int n){
	int max=0;
	while(n!=0){
		if(n%10>max)
			max=n%10;
		n/=10;	
	}
	return max;
}

bool all_differs(int n){
	int i,j,td;
	td=total_digits(n);
	int a[td];
	for(i=0; i<td; i++){
		a[i]=n%10;
		n/=10;
	}
	for(i=0; i<td-1; i++)
		for(j=i+1; j<td; j++)
			if(a[i]==a[j])
				return false;
	return true;			
}

bool is_pandigital(int n){
	if(!all_differs(n))
		return false;
	else{
		int i,max=max_digit(n),ls;
		bool found;
		while(n!=0){
			found=false;
			ls=n%10;
			for(i=max; i>=1; i--)
				if(ls==i){
					found=true;
					break;
				}
			if(found==false)
				break;
			n/=10;		
		}
		if(found==false)
			return false;
		else
			return true;	
	}	
}

int main(){
	int n,m;
	cout<<"Enter a number to find whether it is pandigital: ";
	cin>>n;
	m=max_digit(n);
	if(is_pandigital(n))
		cout<<"Pandigital number of "<<m<<" degree.";
	else
		cout<<"Not pandigital.";		
	return 0;
}
