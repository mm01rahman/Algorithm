#include <iostream>
using namespace std;
int count_digit(int x)
{
    if(x>=10000000000)
    {
        return 10;
    }else if(x>=100000000)
    {
        return 9;
    }else if(x>=10000000)
    {
        return 8;
    }else if(x>=1000000)
    {
        return 7;
    }
    else if(x>=100000)
    {
        return 6;
    }
    else if(x>=10000)
    {
        return 5;
    }
    else if(x>=1000)
    {
        return 4;
    }
    else if(x>=100)
    {
        return 3;
    }
    else if(x>=10)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int number_reverse(int x,int y,int z)
{

    if(count_digit(x)>=1 && x>0)
    {
        y =  x%10;
        x = (x-y)/10;
        z = y+(z*10);
       return number_reverse(x,y,z);
    }
    else
    {
        return z;
    }

}

int main()
{
    int a;
    cout << "Enter a positive number : ";
    cin >> a;
    cout << "The reversed  number is : " << number_reverse(a,0,0);
    return 0;
}
