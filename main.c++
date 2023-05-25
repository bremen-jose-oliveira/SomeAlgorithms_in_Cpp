#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
 void FizzBuzz(int n);
cout << "enter a number to count FizzBuzz: " << endl;
    
    int n;
    cin >> n;

cout << " you entered the number:" << n << endl;
    
 
for (int num = 1; num <= n; num++) 

    if(num % 5 == 0 && num % 3 == 0)
        cout << "FizzBuzz" << endl;
    else if (num % 5 == 0)
        cout << "Fizz"<< endl;
    else if(num % 3 == 0)
        cout << "Buzz"<< endl;
    else cout << num << endl;;
     

    return 0;
}
