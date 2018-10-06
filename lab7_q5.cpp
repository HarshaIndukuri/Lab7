#include<iostream>


using namespace std;



	int oddsum (int a, int b) {

	if (b != a) {


	//Condition for odd
	if (b % 2 == 1) {

	return b + oddsum (a, b-1);
	
	}

	
	//Condition for even
	else { return oddsum(a, b-1);}
	
	

 	}


	else {return 0;}

	}
	



	



	




	int main () {


	int x, y, k;


	cout<<"Enter the first number ";

	cin>>x;

	cout<<endl;
	

	cout<<"Enter a second nuber which is greater than the first ";
		
	cin>>y;

	cout<<endl;

	k = oddsum(x, y);

	if (y%2==1) {

	cout<<k-y<<endl;//Condition if second number is odd 
	
	}


	else {cout<<k<<endl;}//condition if second number is even




	}
	
