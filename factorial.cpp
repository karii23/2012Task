#include <iostream>
using namespace std;
int main()
{
    int factorial= 1;
    int input;

    cout<<"Enter a number to find its factorial: ";
    cin>>input;

    if(input < 0)
    {
        cout<<"Enter a positive integer";
    }
    else if(input == 0)
    {
        factorial = 0;
        cout<<"The factorial of "<<input<<" is "<<factorial;
    }
    else
    {
        for(int i=1; i<=input; i++)
        {
            factorial = factorial*i;
        }
        cout<<"The factorial of "<<input<<" is "<<factorial;
    }
    return 0;
}