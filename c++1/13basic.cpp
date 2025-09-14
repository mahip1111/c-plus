//NOTE:- Agr kahin 34.4 likha ha toh ye double mana jayega instead of the float
// Agr aaap likhoga 34.4f or 34.4F toh ye float mana jayega and agr aap 34.4l or 34.4L likhoga then ye long double mana jayega.

#include <iostream>

using namespace std;

int main()
{
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;    // double ha toh size=8
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;  // float ha toh size=4
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;  // float ha toh size=4
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;  // long double ha toh size=12
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;  // long double ha toh size=12
    return 0;
}