#include <iostream>
using namespace std;

int main() {
	long long int N,result=0,temp;
	cin>>N;
	temp=N;
	while(N>9){
	    result=result*10+(N%10);
	    N/=10;
	}
	result=result*10+N;
	if(result==temp)
	    std::cout << "palindrome" << std::endl;
	else
	    std::cout <<"not palindrome" << std::endl;
	return 0;
}
