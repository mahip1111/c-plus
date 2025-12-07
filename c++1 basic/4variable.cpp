// Global and local variable:-

#include <iostream>

//Note:- Local aur Global variable ka name same ho sakta hai.

int global=5;   // THis is global variable as it is outside the main fxn.k

using namespace std;

int sum(){
    int a;
    cout<< global;      //   aap agr function ko name space ka upar define karoge then in that case apko std:: ka use karna hoga otherwise compiler jo hoga wo error show karega.
}

int main()
{
    int global=3;       // This is local varibale

    global=7;      // THis will change the value of local variable

    cout<< global<<"\n";     // See in this case aapka local variable print hoga

    sum();    // This time it will print global variable. 
    
    // (bcs apna sum fxn. ko call kiya hai and uska andar koi bhi global name ka local varibale nhi hai therefore global there will be automatically global variable.)

    //Note:- Function ka andhar uska local variable ko jyada precendence(importance) milega instead of the global variabale.

    return 0;
}