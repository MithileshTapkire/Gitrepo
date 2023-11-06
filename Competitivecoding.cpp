#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int temp;
        int a[n];
                int flag=0;
        for(int i=1;i<n;i++)
        {
            cin>>temp;
            if(k > temp)
            {
                if(((i-1)&(i))!=0)
                {
                    flag = 1;
                }
            }
            k = temp;
        }
       if(flag)
       {
        cout << "No"<<endl;
       }
       else{
        cout << "Yes" << endl;
       }
        // if(n%2==0)
        // {
        //     if(count==((n/2)-1))
        //     cout<<"Yes\n";
        //     else
        //     cout<<"No\n";
        // }
        // else
        // {
        //   if(n==1)
        //   {
        //     cout<<"Yes\n";
        //   }
        //    else if(count==(((n-1)/2)-1))
        //    {
        //    cout<<"Yes\n";
        //    }
        //     else
        //     cout<<"No\n";
        // }
    }
    return 0;
}
