Sure! Below is the equivalent Go code that performs the same operations as the Rust code you provided:

```go
package main

import "fmt"

func main() {
    // Create a string variable equal to any text value
    var s string = "World"
    
    // Prepend the string variable with another string literal
    s = "Hello " + s
    
    // Print the resulting string
    fmt.Println(s)
}
```

### Explanation:
1. **Import the `fmt` package**: This is necessary for using the `println` function.
2. **Define a main function**: The entry point of any Go program.
3. **Create a variable `s` and initialize it with `"World"`**: This is similar to Rust's `let mut s = "World".to_string()`.
4. **Prepend the string with another literal**: This can be done using the `+` operator in Go.
5. **Print the resulting string**: Use `fmt.Println(s)` to output the value of `s`.

### Running the Code:
When you run this code, it will output:

Hello World

