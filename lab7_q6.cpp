#include<iostream>

using namespace std;

	int rev (int n) {

	if ( (n/10) == 0 ) {

	cout<<n%10<<endl;

	return 0;
	
	}

	else {
	
	cout<<n%10;
	
	rev ((n/10)); //Calling function again

	}

	}
	













	int main () {

	int a;

	cout<<"Enter a number ";//Asking input

	cin>>a;

	

	rev (a);//Calling function to main function




	}
