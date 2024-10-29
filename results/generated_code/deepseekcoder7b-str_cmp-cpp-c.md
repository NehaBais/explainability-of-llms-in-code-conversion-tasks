In C programming language, you can use the strcmp function to compare two strings. Here is how it looks like in your context -

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h> //for tolower function 

void demo_compare(const char* a, const char* b, const char* semantically) {
    if (strcmp(a, b) == 0) {
        printf("\"%s\" and \"%s\" are exactly %sequally.\n", a, b, semantically);
    } else {
        printf("\"%s\" and \"%s\" are not exactly %sequal.\n", a, b, semantically);
    }
    
    if (strcmp(a, b) != 0){ 
       printf("\"%s\" and \"%s\" are lexically inequal.\n", a, b);
    } else {
        printf("\"%s\" and \"%s\" are not lexically inequal.\n", a, b);
    }
    
    if (strcmp(a, b) < 0){ 
       printf("\"%s\" is lexically ordered before \"%s\".\n", a, b);
    } else {
        printf("\"%s\" is not lexically ordered before \"%s\".\n", a, b);
    }
    
    if (strcmp(a, b) > 0){ 
       printf("\"%s\" is lexically ordered after \"%s\".\n", a, b);
    } else {
        printf("\"%s\" is not lexically ordered after \"%s\".\n", a, b);
    }    
}

void to_lower_case(char * str) {
   for ( ; *str!='\0'; str++ )
      *str = tolower(*str);
}

int main(int argc, char* argv[]){ 
    const char * a = (argc > 1) ? argv[1] : "1.2.Foo";
    const char * b = (argc > 2) ? argv[2] : "1.3.Bar";
    
    // Case-sensitive comparisons.
    demo_compare(a, b, "lexically"); 
  
    // Case-insensitive comparisons.
    char acopy[strlen(a)+1];
    strcpy(acopy, a);
    to_lower_case(acopy);
    
    char bcopy[strlen(b)+1];
    strcpy(bcopy, b);
    to_lower_case(bcopy); 
     
    demo_compare(acopy, bcopy, "lexically");
  
    return (strcmp(a, b)==0);
}
```
This will work with all string comparison scenarios mentioned in your question. However, the strcmp() function is case sensitive and it compares lexographically i.e., alphabetical order unlike numeric comparisons where '10' comes before '2' because of ASCII values ('1':49 < '2':50).

