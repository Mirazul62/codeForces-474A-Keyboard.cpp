#include<bits/stdc++.h>
using namespace std;
int main()
{
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    string str,input;
    int i,j;
    cin>>input;
    cin>>str;
    if(input=="L")
    {
        for(i=0;str[i]!='\0';i++)
        {
            for(j=0;keyboard[j]!='\0';j++)
            {
                if(str[i]==keyboard[j])
                {
                    cout<<keyboard[j+1];
                    break;
                }
            }
        }
    }
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            for(j=0;keyboard[j]!='\0';j++)
            {
                if(str[i]==keyboard[j])
                {
                    cout<<keyboard[j-1];
                    break;
                }
            }
        }
    }


}
