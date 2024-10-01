The equivalent code in Golang would be:

```go
package main

import "fmt"

func main() {
    hello := "Hello world"
    hello += "!!!!"
    fmt.Println(hello)
}
```
In this code, the "+=" operator is used to append a string to another string in Golang. This idiomatic way of appending strings in Golang is different from the one used in Rust which uses the `add()` method and the `push_str()` method.
