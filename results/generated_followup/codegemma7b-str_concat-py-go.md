The error occurs because the variable `s1` is declared outside of any package. In Golang, variables need to be declared within a package. The fix is to move the variable declaration inside the `main` function.

```go
package main

import "fmt"
import "strings"

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	s1 = "hello"
	fmt.Println(strings.Join([]string{s1, "world", "mom"}, ", "))

	s2 = strings.Join([]string{s1, "world", "mom"}, ", ")
	fmt.Println(s2)
}
```
