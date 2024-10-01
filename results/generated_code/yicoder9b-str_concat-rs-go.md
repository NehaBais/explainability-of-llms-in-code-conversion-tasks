In Go language there is no need to explicitly convert a string to an owned string because strings are value types in Golang. Here's how the Rust code can be converted into Go:

```go
package main

import (
    "fmt"
)

func main() {
    var s = "hello"
    fmt.Println(s)
    
    var s1 = s + " world"
    fmt.Println(s1)
}
```
