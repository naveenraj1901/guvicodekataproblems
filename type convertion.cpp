#include <iostream>
using namespace std;

int main() {
	long long int i,result=0;
	char N[500];
	cin>>N;
	for(i=0;N[i]!='\0';i++)
	{
	    if(N[i]=='1')
            result+=1;
        else if(N[i]=='2')
            result+=2;
        else if(N[i]=='3')
            result+=3;
        else if(N[i]=='4')
            result+=4;
        else if(N[i]=='5')
            result+=5;
        else if(N[i]=='6')
            result+=6;
        else if(N[i]=='7')
            result+=7;
        else if(N[i]=='8')
            result+=8;
        else if(N[i]=='9')
            result+=9;
        else if(N[i]=='0')
            result*=10;
	    result*=10;
	}
	 result/=10;
	cout<<result;
	return 0;
}
