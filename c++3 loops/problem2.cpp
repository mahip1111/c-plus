// Q: Write a code using the for loop to print the sum of the first n numbers where n is entered by the user.

#include <iostream>
using namespace std;

int main() {
    cout<<"Ente the value of n:";
    int n;
    cin>>n;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {   sum+=i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum;
    
    return 0;
}