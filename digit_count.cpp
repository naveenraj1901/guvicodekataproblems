#include <iostream>
using namespace std;

int main() {
	long long int N,total_digits=0;
	cin>>N;
	while(N>9)
	{
	    total_digits++;
	    N/=10;
	}
	cout<<++total_digits;
	return 0;
}
