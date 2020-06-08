#include <iostream>

using namespace std;

int CalPow(int b,int p){
    if(p==1){
        return b;
    }
    else{
        return (b*CalPow(b,(p-1)));
    }


}

int main()
{
    int base,pow;
    cout<<"Enter any no to calculate's power:";
    cin>>base;
    cout<<"Enter the Power";
    cin>>pow;
    int value=CalPow(base,pow);
    cout<<base<<"^"<<pow<<" = "<<value;

    return 0;
}
