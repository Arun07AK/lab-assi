
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int *A;
    int size=10;
    A=new int [size]{1,2,4,3,5,6,8,7,9,10};
    int n=10;
    int count =0;
    for(int i=0;i<n-1;i++)
    {
        
        if(A[i]>A[i+1])
        {
            cout<<A[i]<<"  "<<A[i+1]<<endl;
            count++;
        }
    }
    cout<<"the no of inversions are "<<count<<endl;
    return 0;
}
