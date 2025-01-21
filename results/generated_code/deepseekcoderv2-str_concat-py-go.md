 Sure! Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	// For the third part, we need to use a slice of strings and join them with ", ".
	parts := []string{s1, "world", "mom"}
	result := fmt.Sprint(parts...)
	fmt.Println(result)

	s2 = s1 + ", " + "world" + ", " + "mom"
	fmt.Println(s2)
}
```

Explanation:
- In Go, you can concatenate strings using the `+` operator just like in Python.
- To join multiple strings with a separator (like Python's `.join()` method), you can use the `fmt.Sprint()` function or simply use string concatenation as shown in the last part of your code.
