The error occurred because the `strings` package is not imported, so it cannot be used in the code. The fix is to import the `strings` package at the beginning of the file using the `import` statement. Here's the corrected code:
```go
package main

import (
 "fmt"
 "strings"
)
func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")
	s2 := s1 + " world"
	fmt.Println(s2)
	s3 := []string{s1, "world", "mom"}
	fmt.Println(strings.Join(s3, ", "))
	s4 := strings.Join(s3, ", ")
	fmt.Println(s4)
}
```
