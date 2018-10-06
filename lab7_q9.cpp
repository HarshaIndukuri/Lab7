#include<iostream>

using namespace std;

//Creating recursive function

	int fac (int x) {

	if ( x != 1 ) {

	return x*fac(x-1);//recalling function using definition of factorial
	
	}

	else {return 1;}

	}










	int main () {

	int n, k;

	cout<<"Enter a natural number n ";//Asking input from user

	cin>>n;

	k = fac(n);//declaring value of k as returned value of function

	cout<<k<<endl;


	}
