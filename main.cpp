#include "hello_world.hpp" // #include "hello_world.hpp" allows you to use the functions of the other file (in this case it is hello_world.hpp and we are using the "hello_world()" function from hello_world.hpp to output to the console "Hello world!"
using namespace std; // as with hello_world.hpp, this allows us to use standard commands without doing std:: before them
// also doing // makes a comment, which is invisible to the compiler and so it don't do anything to the code
int main() // int main runs automatically when the program runs so you can't call it like a normal functions.
{ // start of main
  hello_world(); // calls the hello_world function in hello_world.hpp, calling this function just runs the code in the hello_world function.
  return 0; // we have to return 0; because we said that main is an intager as we said "int main()"
} // end of main
