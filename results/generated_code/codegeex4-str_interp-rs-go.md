In Go, string interpolation is done using the `fmt.Sprintf` function and format verbs. Here's how you would convert your Rust code into Go:

```go
package main

import "fmt"

func main() {
    fmt.Println("Mary had a %s lamb", "little")
    // You can specify order
    fmt.Printf("%v had a %v lamb\n", "Mary", "little")
    // Or named arguments if you prefer
    name := "Mary"
    adj := "little"
    fmt.Printf("%s had a %s lamb\n", name, adj)
}
```
In the Go code above:

- The `fmt.Println` function is used to print strings with spaces between elements.
- The `%s` format verb is used in the `fmt.Printf` call to specify where string values should be inserted into the output string.
- The `%v` format verb is used when order of arguments needs to be specified.
- The variable values are printed using their respective variables directly. 

Also, note that Go's `Printf` function does not support named arguments for string interpolation as in Rust's `println!` macro. You have to manually define and pass the variables' values.
