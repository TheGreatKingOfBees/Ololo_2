#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
     long int chislo1,chislo2,del;
    cin>>chislo1;
    cin>>chislo2;
    
    int i=1;
    while(i<=min(chislo1,chislo2))
    {
        if((chislo1%i==0)&&(chislo2%i==0))
        {
        	del=i;
        }
        i++;
    }
    cout<<del;
}