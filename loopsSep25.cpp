/*
    Midterm in class next Friday, Oct 4.
    Paper and pencil
    Multiple choice and short answer
    50 minutes long. You will need to stay for the whole time - bring a book.
    One cheat sheet of notes is allowed. 8.5 x 11.
    Front and back, typed or hand written, font size is your choice.
    There will be a sample-ish exam. Previous exam was 90 mintues and ahead in material.
    Practice exam will give similar types of questions.
    No phones or laptops during the exam. 
    Topics: variables, conditionals, loops, and functions.
    If you can do the homework, you can do the exam. 
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
        while loops - use this loop type when we don't
        know how many times an action will be needed

        for loop - loop for a fixed number of times.

        any for loop can be written using a while loop
        can't write any while loop as a for loop
    */

   //int i = 0 - creates a variable i, that is local
   //to the for loop, and initializes it to 0
   //i < 10 - loop condition, says how long for
   //loop should go. Loops unti i < 10 is false
   //i++ - this is how i changes everytime through the loop

   for(int i = 0 ; i < 10; i++)
   {
    cout << "i = " << i << endl;
   }

   for(int i = 0 ; i < 10; i+=2)
   {
    cout << "i = " << i << endl;
   }

    string str = "This is a string";
    //how many i's are in str?

    int counter = 0;
    
    for (int i = 0; i < str.length(); i++ ){
        cout << str[i];
        if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u'){
            counter++; //increment our i counter
        }
    }
    cout << "\nThere are " << counter << "i's in the strin" << endl;





    return 0;
}




