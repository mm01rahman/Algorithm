#include <iostream>
using namespace std;
int sum(int *z,int start,int size,int total)
{
    if(start<size)
    {
        *z = *(z+start);
        total = total+ *z;
        start++;
        return sum(z,start,size,total);
    }
    else
    {
        return total;
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int *p;
    int size = sizeof(a)/4;
    p = &a[0];
    int x = sum(p,0,size,0);
    cout<<"The sum is :  "<<x;
    return 0;
}
