# include <stdio.h>
# include <stdlib.h>


def sconcat(s1, s2):
    s0 = bytes(s1 + s2, "utf-8")
    return str(s0, "utf-8")


if __name__ == "__main__":
    s = "hello"
    print(s)  # or print(s + " literal")
    s2 = sconcat(s, " literal")
    print(s2)
    free(s2)
