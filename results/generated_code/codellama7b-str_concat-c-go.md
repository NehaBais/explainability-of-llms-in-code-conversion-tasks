```go
package main

import (
	"fmt"
)

func main() {
	// declare a string variable with a value
	s := "hello"

	// concatenate the string with another string literal
	s2 := s + " literal"

	// print the concatenated string
	fmt.Println(s2)
}
```
This code will create two string variables, `s` and `s2`. The variable `s` is assigned a value of `"hello"` and the variable `s2` is assigned the value of concatenating the string `s` with the string literal `" literal"`. The `fmt.Println()` function is then used to print the value of `s2`.

In Go, strings are immutable by default, so when you need to modify a string, you need to create a new string variable and assign it to that variable. In this example, we use the `+` operator to concatenate two strings together, which will create a new string variable with the value of the two strings combined.

Note that in Go, you don't need to use `malloc()` or `free()` manually like you would in C. The Go garbage collector will automatically manage memory for you.
