#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    char temp;
    int i;
    cin>>input;
    for(i=0;input[i]!='\0' || input[i+1]!='\0';i=i+2){
        temp=input[i];
        input[i]=input[i+1];
        input[i+1]=temp;
    }
    cout<<input;
    return 0;
}
