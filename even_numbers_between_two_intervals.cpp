#include <iostream>
using namespace std;

int main() {
	int start,end;
	cin>>start>>end;
	for(int i=start+1;i<end;i++){
	    if(i%2==0)
	        cout<<i<<" ";
	}
	return 0;
}
