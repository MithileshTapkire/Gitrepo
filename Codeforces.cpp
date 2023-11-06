
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        int flag=0;
        string s="codefrs";
        cin>>ch;
        for(int i=0;i<7;i++)
        {
         if(ch==s[i])  
         {
            flag=1;
            cout<<"YES\n";
         } 
        }
        if(flag==0)
        cout<<"NO\n";
    }
}
