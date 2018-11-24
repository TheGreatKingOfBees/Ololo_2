#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	double n;
	int a;
	int b;
	double x;
	double y;
	bool c=0;
	cin>>n>>a>>b>>x>>y;
	cout<<n<<" "<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
	if (n>b)
	{
		n=n*(1-y/100);
		c=1;
	}
		if ((n>a)&&(c==0))
		{
		n=n*(1-x/100);
		}

	cout<<n;
}
