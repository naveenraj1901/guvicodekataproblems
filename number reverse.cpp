#include <iostream>
using namespace std;

int main() {
	long long int N,result=0;
	cin>>N;
	while(N>9)
	{
	    result+=N%10;
	    result*=10;
	    N/=10;
	}
	result+=N;
	cout<<result;
	return 0;
}
