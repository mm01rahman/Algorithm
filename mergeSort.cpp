#include<iostream>
using namespace std;

void merg(int low, int mid, int high, int c[])
{
    int sa = mid-low+1, sb = high-mid;
    int x=0,y=0,z=low;
    int a[sa],b[sb];

    for(int i=0; i<sa; i++)
    {
        a[i] = c[low+i];
    }
    for(int i=0; i<sb; i++)
    {
        b[i] = c[mid+1+i];
    }

    while(x<sa && y<sb)
    {
        if(a[x]<=b[y])
        {
            c[z]=a[x];
            x++;
        }
        else
        {
            c[z]=b[y];
            y++;
        }
        z++;
    }

    while(y<sb)
    {
        c[z] = b[y];
        y++;
        z++;
    }

    while(x<sa)
    {
        c[z] = a[x];
        x++;
        z++;
    }
}

void mergeSort(int low,int high,int c[])
{
    if(low<high)
    {
        int mid = low+(high-low)/2;
        mergeSort(low,  mid, c);
        mergeSort(mid+1,high,c);
        merg(low,mid,high,c);
    }
}

int main()
{
    int c[] = {3,6,8,6,6,9,1};
    int high  = sizeof(c)/sizeof(c[0])-1;
    int low = 0;
    mergeSort(low,high,c);
    for(int i=0; i<=high; i++)
    {
        cout<<c[i];
    }
    return 0;
}
