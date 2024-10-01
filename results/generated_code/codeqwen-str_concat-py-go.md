Here is the equivalent code in Golang:

```golang
package main

import "fmt"

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	s1 = "hello"
	s3 := fmt.Sprintf("%v, %v, %v", s1, "world", "mom")
	fmt.Println(s3)

	s4 := fmt.Sprintf("%v, %v, %v", s1, "world", "mom")
	fmt.Println(s4)
}
```

In this code:

- The `print` statements are replaced with `fmt.Println` because Golang's standard library doesn't have a built-in print function, like Python.
- String concatenation is performed using the "+" operator in Go just like it is done in Python.
- The "printf" function is used to format the strings for printing. This function replaces `%v` with the value of its parameter.
