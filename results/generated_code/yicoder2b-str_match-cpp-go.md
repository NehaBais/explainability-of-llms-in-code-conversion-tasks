Sure, here is the equivalent code in Golang:

```Go
package main
import (
    "fmt"
	"strings"
)
func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab" 
	//Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("The string starts with the second string")
	} else {
		fmt.Println("The string does not start with the second string")
	}
	//End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("The string ends with the second string")
	} else {
		fmt.Println("The string does not end with the second string")
	}
	//Anywhere
	index := strings.Index(s2, s3)
	if index != -1 {
		fmt.Printf("The string %q is found at location %d\n", s3, index+len(s2))
	} else {
		fmt.Println("The string is not found anywhere in the second string")
	}
	//Multiple occurrences 
	index = strings.Index(s2, s3, index + len(s3))
	if index != -1 {
		fmt.Printf("The string %q is found at location %d\n", s3, index+len(s2))
	} else {
		fmt.Println("The string is not found anywhere in the second string after first occurrence")
	} 
}
```
This program will print whether the strings start with `s3`, end with `s3`, and locate any occurrence of `s3` within `s2` at some point. It also provides the locations for multiple occurrences if they exist.
