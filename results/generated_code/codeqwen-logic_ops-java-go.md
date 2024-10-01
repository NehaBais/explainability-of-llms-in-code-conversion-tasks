Here is the equivalent code in Golang:

```go
package main

import "fmt"

func logic(A bool, b bool) {
  fmt.Println("A AND b: ", A && b)
  fmt.Println("A OR b: ", A || b)
  fmt.Println("NOT a: ", !A)
}
```

In Golang, you don't need to declare the data type of the variables at the time of declaration like in Java. The types are inferred automatically from the context. Also, in Go, there isn't a `println` function, instead we use `fmt.Println`.
