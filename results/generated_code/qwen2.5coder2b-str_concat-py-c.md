In C, the equivalent code would look like this:

```C
#include <stdio.h>

int main() {
    char *s1 = "hello";
    char *s2;

    // Concatenate s1 and " world"
    s2 = (char *)malloc((strlen(s1) + strlen(" world")) * sizeof(char));
    if (s2 == NULL)
        printf("Memory allocation failed.\n");
    else {
        strcpy(s2, s1);
        strcat(s2, " world");
        printf("%s\n", s2);
        free(s2);
    }

    // Concatenate s1 and " world"
    s2 = (char *)malloc((strlen(s1) + strlen(" world")) * sizeof(char));
    if (s2 == NULL)
        printf("Memory allocation failed.\n");
    else {
        strcpy(s2, s1);
        strcat(s2, " world");
        printf("%s\n", s2);
        free(s2);
    }

    // Concatenate s1 with ", " and "mom"
    s2 = (char *)malloc((strlen(s1) + strlen(", ") + strlen("mom")) * sizeof(char));
    if (s2 == NULL)
        printf("Memory allocation failed.\n");
    else {
        strcpy(s2, s1);
        strcat(s2, ", ");
        strcat(s2, "mom");
        printf("%s\n", s2);
        free(s2);
    }

    // Concatenate s1 with ", " and "mom"
    s2 = (char *)malloc((strlen(s1) + strlen(", ") + strlen("mom")) * sizeof(char));
    if (s2 == NULL)
        printf("Memory allocation failed.\n");
    else {
        strcpy(s2, s1);
        strcat(s2, ", ");
        strcat(s2, "mom");
        printf("%s\n", s2);
        free(s2);
    }

    return 0;
}
```

The above code will create a new string variable for each concatenation. You need to include memory allocation and deallocation as well.
