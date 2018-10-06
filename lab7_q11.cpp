#include<iostream>


using namespace std;

	//Making recursive hcf function

	int hcf (int x, int y) {

	if (y != 0) {

	return hcf (y, x%y); //Condition for hcf

	}


	else {return x;}

	}

	










	int main () {


	int a, b, k;


	cout<<"Enter two natural numbers ";

	cin>>a>>b;

	cout<<endl;


	k = hcf (a, b);

	cout<<k<<endl;

	}
