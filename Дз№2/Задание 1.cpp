#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    int c,nomer;
    string stroka;
    int i=0;
    cin>>stroka;
    c=0;
    nomer=stroka.size();
    while(i<nomer)
    {

        if((stroka[i]=='f')&&(c==1))
        {
        c++;
        break;
        }

        if(stroka[i]=='f')
        {
        c=1;
        }
        i++;
    }
    if(c==1)
    {
        cout<<-1;
    }
    if(c==0)
    {
        cout<<-2;
    }
    if(c==2)
    {
    cout<<i+1;
    }
}
