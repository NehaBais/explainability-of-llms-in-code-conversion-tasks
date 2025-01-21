Here's how you can convert the given JavaScript code into Golang:

```go
package main

import (
    "fmt"
)

func main() {
    var s string = ", World"
    s = "Hello" + s
    fmt.Println(s)
}
```

In this code, `var s string = ", World"` declares a variable `s` and initializes it with the string value `", World"`. The line `s = "Hello" + s` concatenates the strings `"Hello"` and `s`, then assigns the result back to `s`. Finally, `fmt.Println(s)` prints the value of `s` to the console.
