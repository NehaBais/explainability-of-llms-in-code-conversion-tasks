Sure, I can help you convert the given Rust code to Go. The main differences between Rust and Go are handling of strings and variables and the way control structures work. Here's how you can write the equivalent Go code:

```go
package main

import "fmt"

func main() {
    // String interpolation
    fmt.Println("Mary had a %s lamb", "little")

    // Order of arguments
    fmt.Printf("%s had a %s lamb\n", "little", "Mary")

    // Named arguments
    name := "Mary"
    adj := "little"
    fmt.Printf("%s had a %s lamb\n", name, adj)
}
```

In this Go code:
- `%s` is used for string interpolation.
- `printf` function is used to replace placeholders with the provided values.
- Named arguments can be passed using field names in `fmt.Printf`.

This will produce the same output as your Rust code:


Mary had a little lamb
little had a Mary lamb
Mary had a little lamb

