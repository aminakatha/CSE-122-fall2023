#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"x,y,z";
    cin>>x>>y>>z;
    if(x>y&& x>z){
        cout<<"x is the largest";
    }
    else if(y>z&& y>x){


    cout<<" y is the largest";
    }
    else if(z>x&& z>y){
        cout<<"z is the largest";
    }
}
