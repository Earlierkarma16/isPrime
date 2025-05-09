#include <iostream>
using namespace std;

int main()
{
//intializes variables
    int number;
bool isPrime(int);
//prompts user for a number to evaluate
    cout<<"Please enter an integer: ";
    cin>>number;
//outputs number and determination
    cout<<"The number: "<<number;

    if (isPrime(number))
    {
        cout<<" is a prime number."<<endl;
    }
    else
        cout<<" is not a prime number."<<endl;

    return 0;
}
//takes inputted integer and evaluates whether or not it is prime
    bool isPrime(int number)
     {
         if (number >1)
         {
             for (int i = 2; i <= number; i++)
             {
                 if (number % i == 0)
                 {
                     if (number == i)
                         return true;
                     else
                         return false;
                 }
             }
         }
        return false;
     }

