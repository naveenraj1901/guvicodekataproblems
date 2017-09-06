//generate tables of N to M
#include <iostream>
using namespace std;

int main() {
	int N,M;
	cin>>N>>M;
	for(int i=1;i<=M;i++)
	    cout<<i<<"*"<<N<<"="<<(i*N)<<"\n";
	return 0;
}
