In Go, we don't have the same command-line argument syntax so here is how you can do this in Golang without error handling for simplicity. Note that Go does not support operator overloading like C++, so there are no special functions to perform arithmetic operations on int type.

Here is your code translated into Go:
```go
package main
import (
    "fmt"
    "os"
    "strconv"
)
func main() {
  if len(os.Args) < 3 {
      fmt.Println("Please provide two integer arguments.")
      os.Exit(1)
  }
  
  b, err := strconv.Atoi(os.Args[2])
  if err != nil {
    fmt.Println("Second argument should be an integer")
    os.Exit(2)
  }

  a, err := strconv.Atoi(os.Args[1])
  if err != nil {
    fmt.Println("First argument should be an integer.")
    os.Exit(3)
  }
  
  fmt.Printf("a+b = %d\n", a+b)
  fmt.Printf("a-b = %d\n", a-b)
  fmt.Printf("a*b = %d\n", a*b)
  fmt.Printf("a/b = %d (truncated towards zero)\n", a/b) // truncates towards zero in Go
  
  remainder := a % b 
  signMatch := "Sign of the first operand"
  if remainder*b < 0 {
    signMatch = "Sign of the second operand"
  } else if remainder == 0 {
    signMatch = "Remainder is zero"
  }
  
  fmt.Printf("a%%b = %d (%s)\n", a%b, signMatch) // same sign as first operand in Go
}
```
Please note that for integer division in Go the result of `5/-2` would be -3 not 2 because it performs "floor" division, which means it rounds towards negative infinity. If you want to perform "truncation" (towards zero), you will have to manually implement this function or use a different library that provides such functionality.

