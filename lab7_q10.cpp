#include<iostream>


using namespace std;


	//Creating recursive function

	int fib (int x) {

	if (x != 1 && x != 2) {

	return fib (x-1) + fib (x-2);//Condition for fibonacci sequence

	}

	if (x==2) { return 1;}

	else {return 0;}

	}

	

	
















	int main () {

	int n, k;	
	
	cout<<"Enter a number n ";//Taking input from user

	cin>>n;

	k = fib (n);//declaring value of k as returned value of function

	cout<<k<<endl;
	

	}
