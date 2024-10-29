In Golang, you can use the "+=" operator to append a string to another. Here's how you would implement that in Golang with equivalent functionality of your C++ code.

```go
package main
import (
    "fmt"
)
func main() {
   var greeting string = "Hello" 
   greeting += ", world!" 
   fmt.Println(greeting)
}
```

This program will print: `Hello, world!` when run. The variable "greeting" is a string and it's being appended with another string literal in the most idiomatic way of Go language ("+="). Then its value is printed using fmt.Println(). It works just like your C++ code.

