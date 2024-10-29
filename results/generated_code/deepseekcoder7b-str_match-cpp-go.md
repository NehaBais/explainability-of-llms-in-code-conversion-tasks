In Go, the equivalent code would be as follows:

```Go
package main
  
import (
	"fmt"
	s "strings" // s is an alias for strings package to make it shorter in use.
)
  
func main() {
	var s1 = "abcd"
	var s2 = "abab"
	var s3 = "ab"
	// Beginning
	starts := s.HasPrefix(s1, s3) 
	fmt.Println("Does the string start with 'ab':", starts)
  
	// End
	ends := s.HasSuffix(s1, s3) 
	fmt.Println("Does the string end with 'ab':", ends)
  
	// Anywhere
	contains := s.Contains(s2, s3)
	if contains {
		fmt.Printf("String %s contains %s at any location.\n", s1, s3)
	} else {
		fmt.Println("String does not contain the given substring.")
	} 
  
	//Location of match for part 2
	index := s.Index(s2, s3) //returns 0
	if index != -1 {
		fmt.Printf("Substring %s found at location: %d\n", s3, index+1)
	} else {
		fmt.Println("Substring not found")
	}  
  
	// Handling multiple occurrences 
	occurrences := 0 // Counter variable for the number of matches found.
	for i := len(s2); i >= 1; i-- {
		if s.HasPrefix(s2[i:], s3) {
			fmt.Println("Found occurrence at position", i+1 ) 
			occurrences++ //increase the count when we find an occurrence.
		}  
	}
	fmt.Printf("Number of occurrences found : %d\n", occurrences)   
}
```

In this Go code, functions `HasPrefix()` and `HasSuffix()` are used for string matching as in C++ (compare function). The `Contains()` function is used to check if the first string contains second string at any location. Similarly, the `Index()` function returns the index of the match(if it exists) else -1.
The occurrence handling part uses a loop to iterate through the substring from end till the start checking for the prefix s3 in each iteration and increments a counter if found which signifies an occurrence. 

Note: Indexing is done based on base 0 index, hence `+1` when printing position of match.

