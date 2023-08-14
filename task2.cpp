#include <iostream>
using namespace std;
int sum(int a[],int start,int sizes,int total)
{
    if(start<sizes)
    {
        total += a[start];
        start++;
        return sum(a,start,sizes,total);
    }
    else
    {
        return total;
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int sizes = sizeof(a)/sizeof(a[0]);
    int x = sum(a,0,sizes,0);
    cout<<"The sum is :  "<<x;
    return 0;
}
