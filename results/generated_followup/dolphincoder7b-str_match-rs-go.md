The error message is "undefined: strings". This means that Golang could not find the `strings` package being used in the code, which can be imported using `"fmt"`. To fix this issue, we need to import the `strings` package and use the methods provided by it for string manipulation. Here is how you can rewrite the code to include the necessary imports and method calls:
```go
package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch *int) {
	switch possibleMatch  {
	case nil:
		fmt.Println("Did not find any matches")
	default:
		fmt.Printf("Found match at pos %d\n", *possibleMatch)
	}
}

func main()  {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	 // Determining if the first string starts with second string
	if !strings.HasPrefix(s1, s3) {
		panic("Assertion error")
	}
	// Determining if the first string contains the second string at any location
	if !strings.Contains(s1, s3)  {
		panic("Assertion error")
	}
	// Print the location of the match 
	possibleMatch := strings.Index(s1, s3)
	printMatch(&possibleMatch) // Found match at pos 0
	printMatch(nil)             // Did not find any matches
	// Determining if the first string ends with the second string
	if !strings.HasSuffix(s2, s3) {
		panic("Assertion error")
	}
}
```
