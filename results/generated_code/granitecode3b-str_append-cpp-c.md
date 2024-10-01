Here's the C code that accomplishes the same task:
```
#include 
int main( ) {
 char * greeting = "Hello" ;
 strcat( greeting, " , world!" ) ;
 printf( "%s", greeting ) ;
 return 0 ;
}
```
In C++, we use the `std::string` class to create a string variable and the `append()` method to add another string literal to it. In C, we use the `char*` type to declare a pointer to a character array and the `strcat()` function to concatenate two strings together. Finally, we use the `printf()` function to print the contents of the variable.

