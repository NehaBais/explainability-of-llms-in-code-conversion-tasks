To convert the C++ code to Golang, we will follow these steps:

1. Import necessary packages
2. Declare a variable of type string and initialize it with the value "Hello".
3. Append the value ", world!" to the string variable using the append method.
4. Print the modified string variable to the console.

Here is the converted Golang code:
```go
package main
import (
    "fmt"
    "strings"
)
func main() {
    greeting := "Hello"
    greeting = strings.Join([]string{greeting, ", world!"}, "")
    fmt.Println(greeting)
}
```

Let me know if you have any questions or need help with the conversion process.
