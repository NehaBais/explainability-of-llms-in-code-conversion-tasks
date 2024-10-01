Here is the converted code from C++ to C:
```
#include 
#include 
#include 
#include 
int main( ) {
 char myStrings[][20] = {"prepended to", "my string"};
 char prepended[100];
 strcpy(prepended, "");
 for (int i = 0; i < sizeof(myStrings) / sizeof(myStrings[0]); i++) {
 strcat(prepended, myStrings[i]);
 }
 printf("%s", prepended);
 return 0;
}
```
In this code, we first declare a 2D array of char strings with a size of 100 characters each. We then initialize the first string with "prepended to" and the second string with "my string". Next, we create an empty string called prepended, and use a for loop to concatenate all the strings in myStrings[] into prepended using the strcat function. Finally, we print out the value of prepended using printf.

