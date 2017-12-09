#include<bits/stdc++.h>
using namespace std;
 
bool isomorphic(string str1, string str2)
{
    int m=str1.length(),n=str2.length(),max=100;
    if (m!=n)
      return false;
    bool marked[max]={false};
    int map[max];
    memset(map,-1,sizeof(map));
    for(inti=0;i<n;i++)
    {
        if(map[str1[i]]==-1)
        {
            if(marked[str2[i]]==true)
                return false;
            marked[str2[i]]=true;
            map[str1[i]]=str2[i];
        }

        else if(map[str1[i]]!=str2[i])
            return false;
    }
 
    return true;
}

int main()
{
   string val1,val2;
   cin>>val1>>val2;
   if(isomorphic(val1,val2))
    cout<<"True";
   else
    cout<<"False";
   return 0;
}
