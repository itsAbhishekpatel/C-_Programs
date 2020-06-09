#include <iostream>

using namespace std;
int Fabonacci(int a){
    if(a==1||a==2){
        return(1);
    }
    else{
        return(Fabonacci(a-1)+Fabonacci(a-2));
    }

}

int main()
{
    int n,value;
    cout<<"Enter no upto fibonacci series find:";
    cin>>n;
    value=Fabonacci(n);
    cout<<value;
    return 0;
}
