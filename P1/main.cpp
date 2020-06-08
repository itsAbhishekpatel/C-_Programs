#include<iostream>
#include<conio.h>

using namespace std;

int sum(int a){
    if(a==1){
        return a;
    }
    int add=a+sum(a-1);
    return add;

}

int main(){
    int num,a;
   cout<<"Enter a num upto sum is required:";
   cin>>a;
    num=sum(a);
    cout<<"Sum of "<<a<<" no is "<<num;


}
