#include<iostream>

using namespace std;

//Recursing function
	int pow (int x, int y) {
		
	if (y != 0) {

	return x*pow(x, y-1);
	
	

	}

	else {
	return 1;
	}
	
	}	












	int main () {

	int a, b, k;	

	cout<<"Enter your base ";

	cin>>a;
	
	cout<<endl;

	cout<<"Enter the exponent ";

	cin>>b;

	cout<<endl;

	k = pow (a,b);

	cout<<k<<endl;


	

	}


