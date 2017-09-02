//Find the largest number among three numbers
//input-integer val1,val2,val3
//output-displays the biggest among these three
#include <iostream>
using namespace std;

int main() {
	int val1,val2,val3;
	cin>>val1>>val2>>val3;
	if((val1>val2)&&(val1>val3))
	    cout<<val1<<" is larger";
	else if(val2>val3)
	    cout<<val2<<" is larger";
	else
	    cout<<val3<<" is larger";
	return 0;
}
