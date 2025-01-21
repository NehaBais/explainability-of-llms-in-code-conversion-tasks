#include <stdio.h>
#include <string.h>

int startsWith(const char *container, const char *target);

int endsWith(const char *container, const char *target);

int doesContain(const char *container, const char *target);

int main(void) {
    printf("Starts with Test ( Hello,Hell ) : %d\n", startsWith("Hello","Hell")));
    printf("Ends with Test ( Code,ode ) ) : %d\n", endsWith("Code", "ode"));
    printf("Contains Test ( Google,msn ) ) : %d\n",
           doesContain("Google", "msn"));

    return 0;
}