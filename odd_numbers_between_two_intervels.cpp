#include <iostream>
using namespace std;

int main() {
	int N,M;
	cin>>N>>M;
	for(int i=N+1;i<M;i++){
	    if(i%2!=0)
	        cout<<i<<" ";
	}
	return 0;
}
