```
import sys

def main():
    # input string and number of characters to extract
    s = "ABCDEFGH"
    n, m = 2, 3

    # display substring starting from n characters in and of length m
    print("Start %d, length %d:    %s" % (n, m, s[n:n+m]))

    # display substring starting from n characters in, up to the end of the string
    print("Start %d, to end:      %s" % (n, s[n:]))

    # display whole string minus last character
    print("All but last:         %s" % s[:len(s)-1])

    # find index of first occurrence of character 'D' in string
    dx = s.index('D')

    # display substring starting from index of 'D', length m
    print("Start 'D', length %d:  %s" % (m, s[dx:dx+m]))

    # find index of first occurrence of substring "DE" in string
    sx = s.index('DE')

    # display substring starting from index of "DE", length m
    print("Start 'DE', length %d: %s" % (m, s[sx:sx+m]))

if __name__ == "__main__":
    main()
```
This code uses the `strings` module to perform various string operations. The `index` method is used to find the index of the first occurrence of a character or substring in the string. The `print` function is then used to display the resulting substrings.

The code also uses the `len` function to get the length of the input string, which is needed to calculate the end index for the substrings that start from a known character within the string and of length m.
