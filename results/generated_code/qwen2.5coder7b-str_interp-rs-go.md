In Go, string interpolation is done using the `fmt` package. The syntax is similar to Rust's, using curly braces `{}` with placeholders that match the order or names of the variables passed in.

Here is how you can convert your Rust code into Golang:

```go
package main

import "fmt"

func main() {
    // Basic interpolation
    fmt.Printf("Mary had a %s lamb\n", "little")
    
    // Specifying order
    fmt.Printf("%s had a %s lamb\n", "Mary", "little")
    
    // Using named arguments
    fmt.Printf("%[2]s had a %[1]s lamb\n", "little", "Mary")  // Note the use of array-like syntax for positional placeholders
    
    // Named arguments using Go's built-in map-like feature (using struct for demonstration)
    type Person struct {
        Name string
        Adj  string
    }
    person := Person{Name: "Mary", Adj: "little"}
    fmt.Printf("%s had a %s lamb\n", person.Name, person.Adj)
}
```

Explanation:
- `fmt.Printf` is used for formatted printing.
- `%s` is used as the placeholder for strings.
- The placeholders can be ordered and named. In Go, named arguments are not directly supported in string interpolation like in Rust, but you can use struct fields or arrays to achieve similar results.

The last example demonstrates how you might handle named arguments by using a struct. This way, you can pass named parameters that make the code more readable and maintainable.
