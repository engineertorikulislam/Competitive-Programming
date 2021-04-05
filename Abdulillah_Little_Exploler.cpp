#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        string s;
        cin>>x>>y;
        cin>>s;
        int n=s.length();
        for(int i=0 ; i<n-1 ; i+=2)
        {
            if(s[i]=='E'||s[i]=='W')
            {
                if(s[i]=='E')  // If We Get E we just do (+)

                    x+= (int) s[i+1]-48;

                else
                    x-= (int) s[i+1]-48;
            }
            else
            {
                if(s[i]=='N')  // If We Get N we just do (+)

                    y+= (int) s[i+1]-48;
                else
                    y-= (int) s[i+1]-48;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
