Below is the C code equivalent to your JavaScript functions. It prompts the user for two integers, then it uses if-else statements along with the comparison operators (==, <, >) to determine which message should be displayed based on the relationship between the two integers. 

In addition, we have to use fgets() function in C to get input from user and sscanf() function to convert string inputs into integer values. Since C does not support functions like print(), it uses printf(). Also, C does not distinguish different types of variables at runtime so type coercion is not a concern here.
```c
#include <stdio.h>

int main(){
  int num1, num2;
  char buffer[256];   //to store user input temporarily

  printf("Enter the first integer: ");
  fgets(buffer, 256, stdin);    //get user input into a string
  sscanf(buffer, "%d", &num1);  //convert that string to an int

  printf("Enter the second integer: ");
  fgets(buffer, 256, stdin);  
  sscanf(buffer, "%d", &num2); 

  if (num1 == num2) {
    printf("%d equals %d\n", num1, num2);
  } else if (num1 < num2){
    printf("%d is less than %d\n", num1, num2);
 <｜begin▁of▁sentence｜>} else {
    printf("%d is greater than %d\n", num1, num2);
```  
In C language, there are no print statements or functions like document.writeln() in JavaScript, so we use printf(). We also have to include the standard input stdin while using fgets(), and scanf function for sscanf() is used for reading integers from a string buffer. The program will execute by taking user's inputs first and then display result according to the comparison of two entered numbers.

