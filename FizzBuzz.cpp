#include<iostream>

using namespace std;
#define m 100

main()
{
    for(int i=1;i<=m;i++)
    {
        if(i%3==0)
            cout<<" Fizz ";
        if(i%5==0)
            cout<<" Buzz ";
        if((i%3==0)&&(i%5==0))
            cout<<" FizzBuzz ";
        if((i%3!=0)&&(i%5!=0))
            cout<<i<<" ";
    }
}
