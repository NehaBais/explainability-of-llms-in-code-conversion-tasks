 Here's the equivalent code in C that performs the same tasks as the provided Go code:

```c
#include <stdio.h>
#include <string.h>

void match(const char *first, const char *second) {
    int prefix_match = strncmp(first, second, strlen(second)) == 0;
    printf("1. %s starts with %s: %s\n", first, second, prefix_match ? "true" : "false");

    const char *contains = strstr(first, second);
    int contains_match = (contains != NULL);
    printf("2. %s contains %s: %s", first, second, contains_match ? "true" : "false");
    if (contains_match) {
        printf(", at location %ld", contains - first);
        for (size_t start = (contains - first) + 1; ; ) {
            const char *next_occurrence = strstr(first + start, second);
            if (next_occurrence == NULL) break;
            printf(", at location %ld", next_occurrence - first);
            start = next_occurrence - first + 1;
        }
        printf("\n");
    }

    int suffix_match = strcmp(first + strlen(first) - strlen(second), second) == 0;
    printf("3. %s ends with %s: %s\n", first, second, suffix_match ? "true" : "false");
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```

### Explanation:
1. **Determining if the first string starts with the second string**: This is done using `strncmp` which compares the first few characters of two strings (`strlen(second)` ensures it only checks up to the length of the second string). The result is checked against 0 for equality.
2. **Determining if the first string contains the second string at any location**: This is achieved with `strstr`, which returns a pointer to the first occurrence of the substring (`second`) in the main string (`first`). If it finds an occurrence, `contains` will not be `NULL`. The result is printed as true or false. If it's true, it also prints the location of the match.
3. **Handling multiple occurrences**: This part is a bit more complex because we need to find all occurrences of the substring starting from each position after the first occurrence until no further matches are found. We use `strstr` again in a loop to continue searching from the end of the last found occurrence.
4. **Determining if the first string ends with the second string**: This is done using `strcmp` on the ending part of the main string that matches the length of the substring (`second`). The result is checked against 0 for equality.
