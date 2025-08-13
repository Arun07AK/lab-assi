// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int linear(int key,int* A)
{
    int len=10;
    int count =0;
    for(int i=0;i<len;i++)
    {
        if(key==A[i])
        {
            count ++;
        }
    }
    return count;
}
int main() {
    //using linear search
    int *A;
    int size=10;
    A=new int [size]{2,2,3,4,5,6,5,8,9,2};
    int n=10;
    int ucount=0;
    int rc=0;
    for(int i=0;i<n;i++)
    {
        if(linear(A[i],A)==1)
        {
            ucount++;
        }
        else
        {
            cout<<A[i]<<" "<<linear(A[i],A)<<endl;
        }
    }
    cout<<ucount<<endl;
    return 0;
}
