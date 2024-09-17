 In Golang, you can use the `fmt.Printf` to print out messages. Also, you don't need to use `type coercion`. Here is how you could convert the given JavaScript code into Golang:

```go
package main

import "fmt"
import "os"

func compare(a int, b int) {
    if a == b {
        fmt.Printf("%d equals %d\n", a, b)
    }
    if a < b {
        fmt.Printf("%d is less than %d\n", a, b)
    }
    if a > b {
        fmt.Printf("%d is greater than %d\n", a, b)
    }
}

func main() {
  var a int
  var b int
  
  // You may replace it with your logic to get input from users in real application
  fmt.Scan(&a)
  fmt.Scan(&b)
  
  compare(a, b)
  
  os.Exit(0)
}
```

In this Go code, we are taking two integer inputs directly from the user and then passing them to `compare` function for comparison. If you want to get input from user in a real application, you have to handle that part separately.
