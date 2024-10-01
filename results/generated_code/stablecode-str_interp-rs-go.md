Here is the equivalent code in Go:

```go
package main

import "fmt"

func main() {

    fmt.Printf("Mary had a %s lamb\n", "big")

    // You can specify order

    fmt.Printf("%1s had a %0s lamb\n", "You", "can")


    // Or named arguments if you prefer

    fmt.Printf("%name had a %adj lamb\n", "Mary", "little")
}
```
This Go code performs the exact same functionality as the Rust code provided in the question statement. 

It uses `fmt.Printf` for string interpolation with defined variable values. The `%s` format specifier is used to insert string representations of variable values into the string. The variable names are specified as arguments after the format string, and Go automatically replaces the corresponding character sequences with the string representations of the passed argument values. 

In the code above: 

- We use standard formatting verbs in `fmt.Printf` for string interpolation. These verbs include `%s`, which is used to insert a string representation of variable value.

- When we want to specify order, or if we prefer named arguments, we simply add them as named arguments after the format string. The Go compiler automatically checks if there are any conflicting named argument names, and throws an error if there are any conflicts.

In conclusion, the equivalent Golang code for the given Rust code is provided above.
