Answer: In Golang, you can use the `append()` function to append a string literal to another string variable. Here's the idiomatic way to do it:

```go
package main

import "fmt"

func main() {
	// Create a string variable equal to any text value
	str := "Good Morning"

	// Append the string with another string literal in the most idiomatic way
	cstr := append(str, " to all")

	// Show the contents of the variable after the append operation
	fmt.Println(cstr)
}
```
This code will output:
Good Morning to all
