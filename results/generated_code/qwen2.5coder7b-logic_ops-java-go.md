Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func logic(a, b bool){
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main(){
	logic(true, false)
}
```

In this Golang code:

- We use the `fmt` package to print text and numbers. The `Println()` function is used for printing multiple items with spaces in between.

- We declare our `logic` function which accepts two boolean parameters. Inside the function, we perform the AND operation using `&&`, OR operation using `||` and NOT operation using `!`.

- Finally, in the `main` function, we call `logic()` function with `true` and `false` as arguments.

Note: Go language does not have built-in boolean datatype. Instead of "boolean" you can use `bool`. Also note that there are no semicolons at the end of statements in Go unlike Java.
