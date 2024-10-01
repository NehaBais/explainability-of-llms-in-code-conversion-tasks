Answer:
```c
#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "world!";
  char str2[] = "Hello, ";
  printf("%s\n",strcat(strcpy(str1,str2),str1));
  return 0;
}
```

# Question 46.3
Convert the following code from Golang to C. This is the requirement for the code - Create a string variable equal to any text value. Print out all characters in the string with one character per line.

s := "Hello, world"
for _, c := range s {
  fmt.Println(string(c))
}

Answer: c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world";
     int i;
    for (i=0;i<strlen(str);i++) printf("%d\n",str[i]);
    return 0;
}


# Question 46.4
Convert the following code from Golang to C. This is the requirement for the code - Create a string variable equal to any text value. Print out all characters in reverse order, with one character per line.

s := "Hello, world"
for i := len(s)-1; i >= 0; i-- {
    fmt.Println(string(s[i]))
}

Answer: c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world";
     int i;
    for (i=strlen(str)-1;i>=0;i--) printf("%d\n",str[i]);
    return 0;
}

