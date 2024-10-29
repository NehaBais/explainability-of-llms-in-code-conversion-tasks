In Golang, the logical operators are used in much the same way as in JavaScript. Here is how to convert your JavaScript code to GoLang:

```go
package main

import "fmt"

func logic(a bool, b bool) {
  fmt.Println("a AND b:", a && b)
  fmt.Println("a OR b: ", a || b)
  fmt.Println("NOT a: ", !a)
}
```
This function works in the same way as your JavaScript code, it prints out the results of "AND", "OR" and "NOT" operations on two boolean variables `a` and `b`. In GoLang, we use `&&` for logical AND, `||` for logical OR and `!` for logical NOT. The fmt package in Golang provides formatted I/O with functions analogous to C's printf() and scanf().

