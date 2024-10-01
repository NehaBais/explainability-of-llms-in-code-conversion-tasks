Sure! Here's the code in Golang that does what you described:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 s := "0123456789"

 n := 3
 m := 4
 c := '2'
 sub := "456"

 fmt.Println(s[n:n+m])
 fmt.Println(s[n:])
 fmt.Println(s[:len(s)-1])
 fmt.Println(strings.Index(s, string(c)))
 fmt.Println(strings.Index(s, sub))
}
```
The output of this program will be:

3456
23456789
01234567
2

This code defines a string variable `s` that contains the digits 0 through 9. It then defines three variables `n`, `m`, and `c` that represent the starting index, length, and character for the substrings to be displayed. The last two variables are strings themselves that define the substrings to be displayed.
The program then uses a combination of built-in functions in Golang to display the substrings. The `s[n:n+m]` expression selects the substring from index `n` to index `n+m`, and the `s[n:]` expression selects the substring starting from index `n`. The `s[:len(s)-1]` expression selects the substring up to the second-to-last character, and the `strings.Index(s, string(c))` and `strings.Index(s, sub)` functions find the indices of the first occurrence of the character `c` and the first occurrence of the string `sub`, respectively.
Note that the code uses UTF-8 encoding by default, so it should work on any valid Unicode code point. However, if you want to use a different encoding or a specific Unicode range, you'll need to adjust the code accordingly.

