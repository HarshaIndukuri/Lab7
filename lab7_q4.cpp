#include<iostream>

using namespace std;


	//Creating recursive function
	int sum (int x) {
	
	if (x!=1) {

	return x+sum(x-1);//Calling function inside function

	}

	else {return 1;}

	}

	






	int main () {
	
	int n, k;

	cout<<"Enter a number n ";

	cin>>n;

	cout<<endl;

	k = sum(n);//Assigning k to returned value of sum

	cout<<k<<endl;


	}
