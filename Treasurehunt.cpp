#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(y<x)
        {
            cout<<x<<endl;
        }
        else
        {
            if(k>=y-x)
            {
                cout<<y<<endl;
            }
            else
            {
                
                cout<<((x+k)+2*(y-(x+k)))<<endl;
            }
        }
    }
}
