#include <iostream>

using namespace std;
/*void TOH(int n,char from_rod,char to_rod,char aux_rod ){
    if(n==1){
        cout<<"Move disk 1 from rod "<<from_rod<< " to rod "<<to_rod<<endl;
        return;
    }
    TOH(n-1,from_rod,aux_rod,to_rod);
     cout << "Move disk "<< n << " from rod "<< from_rod<< " to rod "<< to_rod<<endl;
    TOH(n - 1, aux_rod, to_rod, from_rod);

}*/
void TOH(int n,char beg_rod,char aux_rod,char end_rod){
    if(n>=1){
        TOH(n-1,beg_rod,end_rod,aux_rod);
        cout<<" "<<beg_rod<<" to "<<end_rod<<endl;
        TOH(n-1,aux_rod,beg_rod,end_rod);
    }
}

int main()
{
    int d;
    cout<<"Enter no of disk:";
    cin>>d;
    TOH(d,'A','B','C');

    return 0;
}
