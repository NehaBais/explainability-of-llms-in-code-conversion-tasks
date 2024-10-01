Here's the equivalent code in Golang for the given requirements:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 // Part 1
 fmt.Println("Part 1:")
 fmt.Printf("%t", strings.HasPrefix("abcd", "ab")) // Output: true
 fmt.Printf("%t", !strings.HasPrefix("abcd", "zn")) // Output: false
 // Part 2
 fmt.Println("Part 2:")
 fmt.Printf("%t", strings.Contains("abab", "bb")) // Output: false
 fmt.Printf("%t", strings.Contains("abab", "ab")) // Output: true
 index := strings.Index("abab", "bb")
 if index != -1 {
 fmt.Println("Location of match:", index)
 } else {
 fmt.Println("No match found.")
 }
 index = strings.Index("abab", "ab")
 if index != -1 {
 fmt.Println("Location of match:", index)
 } else {
 fmt.Println("No match found.")
 }
 index = strings.Index("abab", "ab") + 1
 index = strings.Index("abab", "bb", index)
 if index != -1 {
 fmt.Println("Location of match:", index)
 } else {
 fmt.Println("No match found.")
 }
}
```
In this code, we use the `strings` package to perform string matching operations. The `strings.HasPrefix()` function checks whether a string starts with another string, and returns a boolean value. The `strings.Contains()` function checks if a string contains another string at any location, and returns a boolean value. The `strings.Index()` function finds the index of the first occurrence of a substring in a string.
We also handle multiple occurrences of a string by using the `+1` argument in the `strings.Index()` function to search for the next occurrence of the substring. If no match is found, the function returns `-1`. We then use conditional statements to print the location of the match if it exists.

