#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=1;
    cin>>n;
    int mark;
    while(n--)
    {
        cin>>mark;
        cout<<"Student "<<count<<": ";
        if(mark >= 90 && mark <=100)
        {
            cout<<"A+";
        }
        else if(mark >= 80 && mark<=89)
        {
            cout<<"A";
        }
        else if(mark >= 70 && mark <=79)
        {
            cout<<"A-";
        }
        else if(mark >= 60 && mark<=69)
        {
            cout<<"B+";
        }
        else if(mark >= 50 && mark<=59 )
        {
            cout<<"B-";
        }
        else if(mark >= 40 && mark<=49 )
        {
            cout<<"C";
        }
        else if(mark >= 35 && mark<=39)
        {
            cout<<"D";
        }
        else
        {
            cout<<"F";
        }
        cout<<endl;
        count++;
    }
    return 0;
}
