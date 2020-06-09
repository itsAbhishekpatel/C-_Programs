#include <iostream>

using namespace std;

int fact(int a){
    if(a==1){
        return a;
    }
    else{
        return (a*fact(a-1));
    }

}

/*long factorial(int n){
    if(n>0){
        return (n*factorial(n-1));
    }
    else return (1);

}*/

int main()
{
  int num;
  cout<<"Enter any no to find factorial:";
  cin>>num;
  int value=fact(num);
  cout<<"Factorial of "<<num<< "! = "<<value;

    return 0;
}
