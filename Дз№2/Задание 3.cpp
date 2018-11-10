#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    vector <int> as;
    cin>>N;
    int i=0;
    int v=N;
    while(i<N)
    {
        as.push_back(v%2);
        v=v/2;
        if(i>=N)
        {
			break;
		}
        i++;
    }
    for( int g=i;g>0;g--) 
    {
		if(as[g]==1)
		{
			i=g;break;
		} 
	}
	for(int f=0;f<=i;f++)
	{
		cout<<as[i-f];
	}
	
}