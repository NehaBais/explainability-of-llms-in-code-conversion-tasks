In Go, you can use the `+` operator to append strings and print them out. Here is how this C++ code would be converted:

```go
package main

import "fmt"

func main() {
    greeting := "Hello"
    greeting += " , world!"
    fmt.Println(greeting)
}
```

This Go code does exactly the same thing as your C++ code - it creates a string variable `greeting` with an initial value of `"Hello"`, appends another string literal `" , world!"` to it, and then prints out the resulting string.
