Here is the equivalent code in Golang:

```go
package main

import "fmt"

func main() {
    var hello string = "Hello world"
    fmt.Println(hello + "!!!!")
}

func main() {
    var hello string = "Hello world"
    hello += "!!!!"
    fmt.Println(hello)
}
```

In Golang, the `+` operator can be used to concatenate strings. However, since strings in Golang are immutable, we need to use `+=` instead of `.push_str()` to modify an existing string variable.
