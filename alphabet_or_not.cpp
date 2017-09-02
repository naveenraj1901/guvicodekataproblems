//To Checker whether a character is an alphabet or not
//input-alpha:character input
//output-alphabet or not an alphabet based on the input
#include <iostream>
using namespace std;

int main() {
	char alpha;
	cin>>alpha;
	int n=alpha;
	if((n>64 && n<91)||(n>96 && n<123))
	    cout<<"alphabet";
	else
	    cout<<"not an alphabet";
	return 0;
}
