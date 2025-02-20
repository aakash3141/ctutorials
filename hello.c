//Tutorial 1: The hello world program (the most basic program ever)

#include <stdio.h> //Priority #1, include the stuff you're gonna use; you'll need stdio.h to print stuff to the screen (standard input-output library)

int main() //program execution always starts at the main function; every program needs one; the 'int' at the beginning means that the function needs to return an integer**
{
  puts("Hello World!"); //puts(), well, puts a string on the screen... you call the function with a string to print it. We called it with "Hello World!" in this case.
  return 0; //main() needs to return a value**; returning 0 indicates the program succeeded
}

//Notice how every line ends in a semi-colon? You gotta do that for every line if you want to write in C.

//**So I said the main() function needs to return a value... but what kinda happens is that just about everybody forgets to return a value. So the compiler will be nice to you (just this ONCE) and let you compile without returning a value from main().
//But you should really return a value because of good habits and whatnot

//You curious about how I can say stuff to you in plain English in the middle of writing code? Right now I'm talking to you using code comments. TO make a comment, just add two-forward slashes and type whatever you want! (//like this)
//If you wanna write REALLY big comments that span multiple lines but don't wanna do "//" for every line, then do what I do below:

/*This is a really big comment that
spans several lines but it isn't too much work for me
because I can use the cool trick that I just learned!!!!!*/

//Notice how I started the comment with a /* and ended with a */? That's how you make a really big comment!
