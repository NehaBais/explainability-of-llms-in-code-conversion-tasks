Here is how you can convert the given C++ code to Go:

```go
package main

import (
    "fmt"
)

func main() {
    greeting := "Hello"
    greeting += ", world!"
    fmt.Println(greeting)
}
```

In Golang, we use the `:=` operator for variable declaration and initialization. The `+=` operator is used to concatenate strings, just like in C++. The `fmt.Println()` function is used to print the string to the console, similar to `std::cout << greeting << std::endl;` in C++.
