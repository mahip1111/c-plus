#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    cout<<++a<<"\n"<<++a<<"\n"<<--a<<"\n"<<a--<<"\n"<<a++<<"\n"<<"\n";      // NOTE:- ye jo problem hai yahan par bhi same c wla concept lag raha hai ki right se left ko operators evalute honga and jo post operators honga wo sath sath ma print ho jayenga and jo pre operators homga wo final value le kar sare same print honga.
    // NOTE: This process is compiler dependent and ye jo above explanation hai wo sirf apka case ma hi lag rahi hai, it is not necessary ki ye baki compilers ma bhi aise hi lga.

    // Agr aap chahta ho ki operators alag alag chala then you can simply inko alag alag cout ma chalao like:-

    cout<<"The value of a now is:- "<<a<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;
    cout<<a--<<endl;
    cout<<a++<<endl;

    return 0;
}