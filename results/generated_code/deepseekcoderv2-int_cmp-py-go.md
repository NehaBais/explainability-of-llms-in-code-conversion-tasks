Answer: Here is the Golang code that performs the same functionality as above python program.

```
package main

import (
    "fmt"
)

func main() {
    var a, b int
    fmt.Print("Enter value of a: ")
    fmt.Scan(&a)
    fmt.Print("Enter value of b: ")
    fmt.Scan(&b)

    if a < b {
        fmt.Println("a is less than b")
    } else if a > b {
        fmt.Println("a is greater than b")
    } else if a == b {
        fmt.Println("a is equal to b")
    }
}
```
