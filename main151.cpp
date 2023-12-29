#include <iostream>

using namespace std;

 

int gcd(int a, int b)

{

            if(b==0)

            {

                        return a;

            }

            else

            {

                        return gcd(b, a % b);

            }

}

 

int main()

{

            cout << "The Greatest Common Divisor of Two Natural Numbers \n\n";

            cout << "Programmer: Mohammad Rajabpur \t rajabpur.blogsky.com \n\n";

            cout << "To exit the program, enter a number less than 1 \n";