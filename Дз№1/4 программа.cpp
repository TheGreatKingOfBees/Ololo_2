#include <iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if (b==0)
cout<<"Impossible"<<endl;
else{
a=a/b;
cout<<"a/b="<<a<<endl;
}
return 0;
}
