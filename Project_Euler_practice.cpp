#include <iostream>
using namespace std;

int main(){
	int tot=0;
	for(int i=3; i<=9; i++){
		if(i%3==1){
			for(int j=1; j<=31; j++)
				tot++;
		}
		
		else
			for(int j=1; j<31; j++)
				tot++;
	}
	cout<<tot-9<<endl;
	cout<<"For 670 problems is required average "<<670/(tot-9)<<endl;
	return 0;
}
