## Answer:
The following code is the converted version of given C++ program to C language:-
```C
#include <stdlib.h>
#include <stdio.h>
int main() {
   FILE *fp;
   char str[60];  //Declare a string of size 60
   fp = fopen("input.txt","r");//open the file input.txt in read mode,and if it is not present then return NULL pointer
   if(fp == NULL) {
      perror("Error opening file");
      exit(1);
   }
   while(fgets(str, 60, fp)!=NULL)
      printf("%s", str);//print the string in console window
      fclose(fp);
      return 0;
}
```
The output of this program is:-
This file contains code in C.

