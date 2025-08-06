// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    //binay search
    int *A;
    int size=10;
    A=new int [size]{5,2,11,44,55,6,46,8,9,1};
    int len=10;
    int h=len-1;
    int l=0;
    int mid=0;
    int key=6;
    for(int i=0;i<len;i++)
    {
        for(int j=0; j<len-i-1;j++)
        {
            if(A[j+1]<A[j])
            {
                swap(A[j],A[j+1]);
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<A[i]<<endl;
    }

    return 0;
}
