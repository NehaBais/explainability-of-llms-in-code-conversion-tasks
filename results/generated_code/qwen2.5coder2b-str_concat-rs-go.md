In Go, you can achieve this by using string concatenation operations. The `+` operator is used to combine strings. Here's the equivalent of the Rust code:

```go
package main

import "fmt"

func main() {
    s := "hello"
    fmt.Println(s)  // Output: hello
    
    s1 := s + " world"
    fmt.Println(s1) // Output: hello world
}
```

In Go, `s` is declared as a string type and initialized with the value `"hello"`. The first `fmt.Println(s)` prints this value. Then, `s1` is assigned the result of concatenating `s` and `" world"` using the `+` operator. Finally, `fmt.Println(s1)` prints the concatenated value.
