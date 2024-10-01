### Solution

```go
package main

import "fmt"

func main() {
	// Beginning
	s1 := "abcd"
	s3 := "ab"
	if s1[:len(s3)] == s3 {
		fmt.Println("Yes, string starts with s3")
	} else {
		fmt.Println("No, string doesn't start with s3")
	}

	// End
	if s1[len(s1)-len(s3):] == s3 {
		fmt.Println("Yes, string ends with s3")
	} else {
		fmt.Println("No, string doesn't end with s3")
	}

	// Anywhere
	s2 := "abab"
	if loc := s2.Index(s3); loc != -1 {
		fmt.Printf("Yes, string contains '%v'\n", s3)
		for ; loc >= 0; {
			fmt.Println(loc)
			loc = s2.Index(s3, loc+len(s3))
		}
	} else {
		fmt.Printf("No, string doesn't contain '%v'\n", s3)
	}
}
```
