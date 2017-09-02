#include <iostream>
using namespace std;

int main() {
	int N,M,result=1;
	cin>>N>>M;
	for(int i=0;i<M;i++)
	{
	    result*=N;
	}
	cout<<result;
	return 0;
}
