//Program to Determining a Prime Number or Not
#include <iostream>
using namespace std;

int main()
{
    int number,i, value;
    cout<<"Enter Number = \n";
    cin>>number;
    value=0;
    for (i=2;i<=number/2;i++){
        if (number%i==0) //Condition to find number who while it modulo with i the value is 0 (zero)
          value=1;
        }
        //Conditions to determining prime number or not
        if(value==0){
            cout<<"PRIMES";
        }
        else{
            cout<<"NOT PRIMES";
        }
    return 0;
}
