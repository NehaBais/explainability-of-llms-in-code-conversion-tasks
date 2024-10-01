In Go, string comparison is done using the `==` and `!=` operators just like in JavaScript, but there's no equivalent of `===` as it compares both value and type.

Go also has a function called `strings.Compare()` that can be used for lexical comparison of two strings. It returns 0 if the strings are equal, less than 0 if the first string is lexically before the second string, or greater than 0 if the first string is lexically after the second string.

For case insensitive comparisons, Go provides `strings.EqualFold()` function which performs a case-insensitive comparison of two strings.

Here's how it can be done in Golang:
```go
package main
import ("fmt"
         "strings")
 
func main() {
    fmt.Println(
        strings.Compare("abcd", "abcd") == 0, // true
        "abcd" != "abcd",                     // false
        123 == strings.ToInt64("123"),         // true - but note that numeric comparison is done with ints or floats, not as strings
        strings.Compare("ABCD", "abcd") < 0,  // true
        strings.Compare("abcd", "dcba") < 0,  // true
        strings.EqualFold("ABCD", "abcd")     // true (case insensitive)
    )
}
```
For comparing strings where numbers are part of the string value, you have to use `strconv.Atoi` or `strconv.ParseInt` functions from the strconv package to convert a string to an integer for comparison.
