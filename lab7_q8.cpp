#include<iostream>


using namespace std;


	//Making recursive function
	int digsum (int n) {

	if ( (n/10) != 0 ) {

	return n%10 + digsum ((n/10));//condition to get sum of digits

	}

	else {return 1;}

	}
	




	
	

	int main () {

	int a, k;

	cout<<"Enter an integer ";
	

	cin>>a;


	k = digsum (a);//Declaring value of k

	cout<<k<<endl;

	}
