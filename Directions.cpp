#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=0,y=0,n;
        int flag=0;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
            x++;
            else if(s[i]=='D')
            x--;
            else if(s[i]=='R')
            y++;
            else
            y--;
            if(x==y && x==1)
            {
                flag=1;
                cout<<"YES\n";
                break;
            }
        }
 
        if(flag==0)
        {
            cout<<"NO\n";
        }
 
    }
}
