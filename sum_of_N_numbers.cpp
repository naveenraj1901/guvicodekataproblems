#include <iostream>
using namespace std;

int main() {
	long long int N,sum=0;
	cin>>N;
	if(N>0)
	{
	    for(int i=1;i<=N;i++)
	    {
	        sum+=i;
	    }
	    std::cout << sum << std::endl;
	}
	else
	    std::cout << N<<" is not a valid number" << std::endl;
	return 0;
}
