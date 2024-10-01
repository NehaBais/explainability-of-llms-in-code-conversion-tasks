# include <stdio.h>
# include <string.h>
# include <stdlib.h>


def main():
    str = "my String"
    cstr = "Changed "
    dup = strdup(str)
    sprintf("%s%s", cstr, dup)
    free(dup)
    print(str)
    return 0
