The error message suggests that there is no `join` method in Go string type. The `join` function comes from the `strings` package which is available in all Go versions. 

To solve this issue, you can use the following Go code:
```go
package main

import (
	"fmt"
)

func join(delimiter string, list []string) string {
	var result string
	for _, item := range list {
		result += item + delimiter
	}
	return result[:len(result)-1*len(delimiter)] // Remove last delimiter
}

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world") // prints hello world

	s2 := s1 + " world"
	fmt.Println(s2) // prints hello world

	s1 = "hello"
	fmt.Printf("%s, %s, %s\n", s1, "world", "mom") // prints hello, world, mom

	s2 = join(", ", [3]string{s1, "world", "mom"})
	fmt.Println(s2) // prints hello, world, mom
}
```
In this Golang program, a function `join` is added to concatenate the elements of an array with a specified delimiter. The slice method `[:len(result)-1*len(delimiter)]` is used to remove the last character added by the delimiter.
