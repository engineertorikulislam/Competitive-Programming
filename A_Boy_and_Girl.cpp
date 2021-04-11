#include<iostream>
using namespace std;

int main()
{
    int i, j,count=0,temp;
    string str;

    cin >> str;

    for(i=0;i<str.length();i++){

        for(j=i-1;j>=0; j--)
        {   temp=1;
            if(str[i] == str[j])
            {
                temp=0;

                break;
            }

        }
        if(temp)

          count++;
    }

    if(count%2 == 0)
    {
      cout<< "CHAT WITH HER!"<<endl;
    }
   else
    {
     cout<< "IGNORE HIM!" <<endl;
    }

   return 0;
}
