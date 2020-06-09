#include <iostream>

using namespace std;

int GCD(int a,int b){
    if(a%b==0){
        return b;
    }
    if(b%a==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return(GCD(a%b,b));
    }
    if(b>a){
        return(GCD(a,b%a));
    }
}
int main()
{
    int a,b;
    cout << "Enter two no to find GCD."<< endl;
    cin>>a;
    cin>>b;
    int value=GCD(a,b);
    cout<<"GCD OF "<<a<<" "<<b<<" : "<<value;
    return 0;
}
