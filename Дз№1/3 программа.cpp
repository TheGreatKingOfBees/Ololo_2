#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c,D,x1,x2, x3;
    cin>> a >>b>>c;
    D= b*b-4*a*c;
    x1=(-b + sqrt(D))/(2*a);
    x2=(-b - sqrt(D))/(2*a);
    cout<< "D="<<D<<endl;
    if(a==0) {
        x3=-c/b;
        cout<<x3<<endl;
   }
    else {

        if (D>0){
            cout<<x1<<" "<<x2<< endl;
            }
            else {
            	if (D==0 ){
                cout<<x1<<endl;
            	}
            	else{
                cout<<"NULL"<<endl;
            	}
            }
    }
       return 0;
}