The code snippet above is written in Rust and it contains several string interpolations. In Golang, we don't have a specific syntax for string interpolation like the one used in Rust. However, we can achieve similar results using the `fmt` package which provides a way to print values into strings.

Here's an example of how you could convert the code from Rust to Go:
```go
package main

import "fmt"

func main() {
    name := "Mary"
    age := 30
    fmt.Printf("%s had a %d lamb", name, age)
}
```
In this example, we've defined two variables `name` and `age`, which are then passed as arguments to the `fmt.Printf()` function using the `%s` and `%d` placeholders respectively. These placeholders allow us to insert values into the string at runtime, creating a formatted output.

Note that in Go, we don't have to worry about order of the arguments like Rust, as the `fmt.Printf()` function will always print the first argument, then the second one and so on. Also, we can use named arguments instead of positional ones if we prefer.
