#include<iostream>


using namespace std;


	//Creating recursive function

	int evennat (int a, int b) {

	if (a==b-1) {return 1;}

	else {

	a++;
	
	//Condition for being even
	if (a%2==0) {

	cout<<a<<endl;
	
	
	

	}
	
	evennat (a, b);//Calling function again

	}

	}


	
	

	int main () {
	
	int x, y;	
	
	cout<<"Enter the first natural number ";

	cin>>x;

	cout<<endl;

	cout<<"Enter a second natural number greater than the first number ";
	
	cin>>y;

	cout<<endl;

	evennat (x, y);

	}



