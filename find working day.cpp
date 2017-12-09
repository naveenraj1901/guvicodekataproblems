#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin>>input;
    if(input=="Sunday" || input=="sunday" || input=="SUNDAY" || input=="SATURDAY" || input=="Saturday" || input=="saturday")
    cout<<"False";
    else
    cout<<"True";
    return 0;
}
