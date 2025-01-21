Sure! Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

void checkStringMatching() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";

    // Beginning
    if (strncmp(s1, s3, strlen(s3)) == 0) {
        printf("s1 starts with s3\n");
    } else {
        printf("s1 does not start with s3\n");
    }

    // End
    int len_s1 = strlen(s1);
    int len_s3 = strlen(s3);
    if (strncmp(&s1[len_s1 - len_s3], s3, len_s3) == 0) {
        printf("s1 ends with s3\n");
    } else {
        printf("s1 does not end with s3\n");
    }

    // Anywhere
    int loc = strstr(s2, s3) ? (int)(strstr(s2, s3) - s2) : -1;
    if (loc != -1) {
        printf("s1 contains s3 starting from location: %d\n", loc);
    } else {
        printf("s1 does not contain s3 anywhere\n");
    }

    // Multiple occurrences
    while ((loc = strstr(&s2[loc + 1], s3)) != NULL) {
        printf("s1 contains s3 at location: %ld\n", (long)(loc - s2));
    }
}

int main() {
    checkStringMatching();
    return 0;
}
```

### Explanation:
1. **Beginning**: We use `strncmp` to compare the beginning of `s1` with `s3`. If they match, it means `s1` starts with `s3`.
2. **End**: We calculate the starting index of the last occurrence of `s3` in `s1` using `strlen(s1) - strlen(s3)` and then compare using `strncmp`.
3. **Anywhere**: We use `strstr` to find the first occurrence of `s3` in `s2`. If found, we print its location.
4. **Multiple Occurrences**: We repeatedly call `strstr` starting from one character after the last found position until no more occurrences are found.

This code will demonstrate the required string matching functionalities and handle multiple occurrences for part 2.
