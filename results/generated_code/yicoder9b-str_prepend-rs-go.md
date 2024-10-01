In Go language there is no direct equivalent to Rust's `String` type or its methods like `insertStr()`. However, strings in Golang are immutable and we can use the `+` operator for concatenation. Here is how you can achieve something similar:
```go
package main
import ("fmt")

func main() {
    var s = "World"
    s = "Hello " + s 
    fmt.Println(s)
}
```
