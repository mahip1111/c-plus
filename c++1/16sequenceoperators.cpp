//    Escape               Sequence Meaning

//     \n	                New line (moves cursor to the beginning of next line)
//     \t	                Horizontal tab
//     \v	                Vertical tab
//     \b	                Backspace
//     \r	                Carriage return (moves cursor to beginning of the same line)
//     \f                	Form feed (new page in printers)
//     \\	                Backslash (\) itself
//     \'	                Single quote (')
//     \"                	Double quote (")
//     \?	                Question mark (?) (used to avoid trigraph issues)
//     \0	                Null character (used to terminate strings in C)
//     \a	                Alert (bell sound, if supported)

// NOTE(TO remember):- \ ke badh wale character ko kehta hai terminating character.

// in sab ko use kar ke dekho.

#include <iostream>

using namespace std;

int main()
{
    cout<<("My name is\vMAHEEP\vI am 19 years old. ")<<endl<<endl;
    // see in your windows version or due to compiler \v=\n .

    cout<<"Hellooo\b\b";
    cout<<" World"<<endl;
    // see jo \b operator hai wo just space piche kar raha hai delete nhi kar raha character bas jab space piche hui na toh purana character ka upar naya character aya hai, baki delete kuch nhi kiya isne.
    // Tabhi aap dekhna  cout<<"Hellooo\b\b"; jab aap ye print karoge tab Hellooo copy hoga na ki Hello okay!
    cout<<"Hellooo\b\b";
    
    //Baki ke badh me dekh lena.

    return 0;
}