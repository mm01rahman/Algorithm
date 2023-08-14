#include<iostream>
using namespace std;
int pivot(int a[],int low,int high)
{
    int i=low,j=low-1;
    for(i; i<high; i++)
    {
        if(a[i]<=a[high])
        {
            j++;
        }
        if(a[i]<a[j])
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[j+1],a[high]);
    return j+1;
}
void quickSort(int a[],int low,int high)
{
    if(high>low)
    {
        int x = pivot(a,low,high);
        quickSort(a,low,x-1);
        quickSort(a,x+1,high);
    }
}
int main()
{
    int low,high;
    int a[] = {3,5,2,3,6,8,4,6,8,9,4,5,6};
    high = sizeof(a)/sizeof(a[0]);
    low = 0;
    quickSort(a,low,high);
    for(int i=0; i<high; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
