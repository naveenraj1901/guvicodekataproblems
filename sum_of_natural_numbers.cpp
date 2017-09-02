#include <iostream>
using namespace std;

int main() {
	int val;
	cin>>val;
	if(val>0)
	    cout<<((val*(val+1))/2);
	else
	    cout<<"non natural number";
	return 0;
}
