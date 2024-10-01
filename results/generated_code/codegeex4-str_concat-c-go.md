```go
package main

import (
	"fmt"
)

func sConcat(s1 string, s2 string) *string {
	s := s1 + s2
	return &s
}

func main() {
	s := "hello"
	fmt.Println(s)
	fmt.Println(s + " literal")

	s2 := *sConcat(s, " literal")
	fmt.Println(s2)
}
```
