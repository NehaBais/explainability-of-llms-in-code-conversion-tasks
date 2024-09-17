```go
package main

import "fmt"

func main() {
  var a, b int
  fmt.Scanln(&a, &b)

  fmt.Println("a+b =", a+b)
  fmt.Println("a-b =", a-b)
  fmt.Println("a*b =", a*b)
  fmt.Println("a/b =", a/b) // Truncates towards zero
  fmt.Println("a%%b =", a%b) // Same sign as first operand
}
```
