#include <iostream>
using namespace std;


int main()
{
    int choice;
    int highest_val;
    cout<<"Enter number of the option you wish to select:\n1.Choose even numbers\n2.Choose odd numbers\n3.Choose prime numbers" <<endl;
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        cout<<"Enter a positive integer to get the highest value in the range: ";
        cin>>highest_val;
        if(highest_val < 0)
        {
            while(highest_val < 0)
            {
                cout<<"Enter a positive integer ";
                cin>>highest_val;
            }    
        }
        if(highest_val > 0)
        {
            int even_num = 0;
            for(int i=1; i<=highest_val; i++)
            {
                if(i % 2 == 0)
                {
                    even_num = i;
                }
            }
            cout<<"The highest even number from range 0 to "<<highest_val<<" is "<<even_num;
        }
        break;
    
    case 2:
        cout<<"Enter a positive integer to get the highest value in the range: ";
        cin>>highest_val;

        if(highest_val < 0)
        {
            while(highest_val < 0)
            {
                cout<<"Enter a positive integer ";
                cin>>highest_val;
            }    
        }

        if(highest_val > 0)
        {
            int odd_num = 1;
            for(int i=1; i<=highest_val; i++)
            {
                if(i % 2 != 0)
                {
                    odd_num = i;
                }
            }
            cout<<"The highest odd number in the range 1 to "<<highest_val<<" is "<<odd_num;
        }
        break;

    case 3:
        cout<<"Enter a positive integer to get the highest value in the range: ";
        cin>>highest_val;

        if(highest_val < 0)
        {
            while(highest_val < 0)
            {
                cout<<"Enter a positive integer ";
                cin>>highest_val;
            }    
        }
        if(highest_val > 0)
        {
            int prime_num;
            for(int j=1; j<highest_val; j++){
                for(int i=2; i<=j/2; ++i){
                    if(j%i == 0){
                        break;
                    }
                    else if(i == j/2) prime_num = j;
                }
            }
             cout<<"The highest prime number in the range 1 to "<<highest_val<<" is: "<<prime_num;
        }
        break;


    default:
        cout<<"Select a number from 1 to 3 according to your choice";
        break;
    }
    return 0;
}