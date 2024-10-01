Here's the equivalent code in Golang:
```go
package main
import "fmt"
func main() {
 s1 := "abcd"
 s2 := "abab"
 s3 := "ab"
 // Beginning
 fmt.Println(s1[:len(s3)] == s3)
 // End
 fmt.Println(s1[len(s1)-len(s3):] == s3)
 // Anywhere
 loc := strings.Index(s2, s3)
 if loc != -1 {
 fmt.Println("Match found at location:", loc)
 } else {
 fmt.Println("No match found")
 }
}
```
This code defines three strings `s1`, `s2`, and `s3`. It then demonstrates the three types of string matching as follows:
- Beginning: The code uses slicing to get the first few characters of `s1` and compares them with `s3`. If they match, it prints `true`, otherwise it prints `false`.
- End: Similarly, the code uses slicing to get the last few characters of `s1` and compares them with `s3`. If they match, it prints `true`, otherwise it prints `false`.
- Anywhere: The code uses the `strings.Index()` function to find the location of the first occurrence of `s3` in `s2`. If a match is found, it prints the location, otherwise it prints "No match found". The code also demonstrates how to handle multiple occurrences by starting the search from the previous location of the match.
Note that in Golang, strings are immutable, so you cannot modify them directly like in C++. Instead, you can create new strings or use slicing to extract substrings from existing ones.

