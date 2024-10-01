```go
package main

import "fmt"

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("s1 starts with s3")
	}

	// End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("s1 ends with s3")
	}

	// Anywhere
	loc := strings.Index(s2, s3)
	if loc != -1 {
		fmt.Println("s2 contains s3 at location", loc)
	}

	// Handle multiple occurrences
	count := strings.Count(s2, s3)
	fmt.Println("s2 contains s3", count, "times")
}
```
