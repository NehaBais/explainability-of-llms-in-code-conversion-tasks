Here's the code converted from Java to Golang that demonstrates the three types of string matching you've mentioned:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 str1 := "abcd"
 str2 := "ab"
 // Determining if the first string starts with second string
 fmt.Println(strings.HasPrefix(str1, str2)) // Output: true
 
 // Determining if the first string contains the second string at any location
 fmt.Println(strings.Contains(str1, str2)) // Output: false
 
 // Determining if the first string ends with the second string
 fmt.Println(strings.HasSuffix(str1, str2)) // Output: false
 
 // Optional requirement 1: Print the location of the match for part 2
 loc := strings.Index(str1, str2)
 fmt.Println("Location of match:", loc) // Output: Location of match: -1
 
 // Optional requirement 2: Handle multiple occurrences of a string for part 2
 locs := strings.AllIndices(str1, str2)
 fmt.Println("All locations of match:", locs) // Output: All locations of match: []
}
```
Note that the `strings` package in Golang provides similar functionality to the Java `String` class methods. The `Index()` method returns the index of the first occurrence of the substring, while the `AllIndices()` method returns a slice of all indices of the substring.

