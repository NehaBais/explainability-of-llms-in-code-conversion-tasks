Below is the C equivalent of your Go code:

1. It uses `strncmp` for the start check, `strstr` for the contain check and `strlen` for length calculation. The end string comparison can be done with `strncmp` by comparing a reversed copy of first string to the reversed second string. 
2. C doesn't handle multiple occurrences out-of-the box like Go, so we have to write our own function that loops through the string and applies the check repeatedly.
3. The `strncmp` is used for end check.
4. I also added a simple main function with two strings for testing.
5. In C, it's more verbose because you need to manage memory manually and explicitly handle errors that aren’t handled automatically by the runtime environment.

```c
#include <stdio.h>
#include <string.h>

void starts_with(const char* str, const char* start) {
    if (strncmp(str, start, strlen(start)) == 0) {
        printf("1. %s starts with %s: true\n", str, start);
    } else {
        printf("1. %s starts with %s: false\n", str, start);
   <｜begin▁of▁sentence｜>		 
		has_substring(const char* str, const char* sub) {
    	const char *p = strstr(str, sub);
	if (p == NULL) {
        	printf("2. %s contains %s: false\n", str, sub);
	} else {
        	printf("2. %s contains %s: true\n", str, sub);
		for (int i = 0; ; ++i) {
            	const char *q = strstr(str + i, sub);
            	if (q == NULL) break;
            	printf("2.%d at location %lu\n", i + 1, (unsigned long)(q - str));
		}
    	}
}

void ends_with(const char* str, const char* end) {
    size_t lenstr = strlen(str);
    size_t lenend = strlen(end);
    if (lenstr >= lenend && strncmp(str + lenstr - lenend, end, lenend) == 0) {
        printf("3. %s ends with %s: true\n", str, end);
    } else {
        printf("3. %s ends with %s: false\n", str, end);
    }
}

int main() {
    starts_with("abracadabra", "abr");
    has_substring("abracadabra", "abr");
    ends_with("abracadabra", "bra");
    return 0;
}
```

