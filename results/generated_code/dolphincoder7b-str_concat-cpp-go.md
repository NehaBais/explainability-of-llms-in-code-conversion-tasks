This is how you can convert the given C++ code to Golang using the following approach:

1. To create a string variable with the value "hello", we use the `string` package and assign it to the `s` variable. Here's the Golang equivalent:
   ```go
   s := "hello"
   ```
2. To concatenate the string value "hello" with the literal " literal", we can use the `+` operator. Here's how you do it in Golang:
   ```go
   s2 := s + " literal"
   ```
3. Finally, to display the content of both variables using the `fmt` package, you can use the following code:
   ```go
   fmt.Println(s)
   fmt.Println(s2)
   ```
Here's the complete Golang equivalent:
```go
package main

import "fmt"

func main() {
    s := "hello"
    s2 := s + " literal"

    fmt.Println(s)
    fmt.Println(s2)
}
```
Now, let's execute this code in the Go Playground to make sure it works correctly.
