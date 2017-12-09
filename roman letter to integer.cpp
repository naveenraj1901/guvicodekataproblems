#include <iostream>
using namespace std;

int main() {
	string roman_str;
	int i,result=0;
	cin>>roman_str;
	for(i=0;roman_str[i]!='\0';i++)
	{
	    if(roman_str[i]=='I' || roman_str[i]=='i' || roman_str[i]=='V' || roman_str[i]=='v' ||roman_str[i]=='X' || roman_str[i]=='x')
	    {
	    if(roman_str[i]=='I' || roman_str[i]=='i')
	        result+=1;
	    else if((roman_str[i]=='V' || roman_str[i]=='v') && (roman_str[i-1]=='I' || roman_str[i-1]=='i'))
	        {result+=5;result-=2;}
	    else if(roman_str[i]=='V' || roman_str[i]=='v')
	        result+=5;
	    else if((roman_str[i]=='X' || roman_str[i]=='x') && (roman_str[i-1]=='I' || roman_str[i-1]=='i'))
	        {result+=10;result-=2;}
	    else if((roman_str[i]=='X' || roman_str[i]=='x'))
	        result+=10;
	    }
	    else
	    {
	        result=0;cout<<result;return 0;
	    }
	}
	cout<<result;
	return 0;
}
