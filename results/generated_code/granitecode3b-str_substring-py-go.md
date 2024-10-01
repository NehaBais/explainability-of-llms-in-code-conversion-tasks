Sure, here's the code in Golang that accomplishes the task:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 s := "abcdefgh"
 n, m, char, chars := 2, 3, 'd', "cd"
 // starting from n=2 characters in and m=3 in length;
 fmt.Println(s[n-1 : n+m-1])
 // starting from n characters in, up to the end of the string;
 fmt.Println(s[n-1:])
 // whole string minus last character;
 fmt.Println(strings.TrimRight(s, string(s[len(s)-1])))
 // starting from a known character char="d" within the string and of m length;
 indx := strings.Index(s, string(char))
 fmt.Println(s[indx : indx+m])
 // starting from a known substring chars="cd" within the string and of m length. 
 indx := strings.Index(s, string(chars))
 fmt.Println(s[indx : indx+m])
}
```
This code imports the `fmt` and `strings` packages to use their functions for printing and manipulating strings. The `main` function sets up the variables and prints out the results of the different substrings being extracted from the string `s`. Note that the `TrimRight` function is used to remove trailing whitespace characters from the end of the string, and the `Index` function is used to find the index of a substring within the string.

