#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    char temp;
    int i;
    getline(cin,input);
    temp=input[0]-32;
    cout<<temp;
    for(i=1;input[i]!='\0';i++){
        if(input[i]==32){
            temp=(input[i+1]-32);
            cout<<temp;i++;}
        else
            cout<<input[i];
            
    } 
    return 0;
}
