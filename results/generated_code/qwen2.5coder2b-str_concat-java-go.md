Sure, here is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func main() {
	s := "hello"
	fmt.Println(s + " literal")
	s2 := s + " literal"
	fmt.Println(s2)
}
```

In this code:
1. We import the fmt package which provides functions for printing to the console.
2. We declare a main function which is the entry point of our program.
3. Inside the main function, we declare a variable `s` and assign it the string value "hello".
4. We then print the concatenation of `s` and the string literal " literal" using fmt.Println.
5. Finally, we again concatenate `s` and " literal" and print the result using fmt.Println.

When you run this program, it will output:

hello literal
hello literal

