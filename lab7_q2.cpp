#include<iostream>

using namespace std;


	//Writing recursive function
	
	int nat (int a, int b) {

	if (a==b+1) {return 1;}

	else {

	cout<<a<<endl;
	a++;
	nat (a,b);//Calling function again

	}

	}



	int main () {

	int n;

	
	cout<<"Enter a natural number n ";

	cin>>n;

	nat (1,n);

	}
	
