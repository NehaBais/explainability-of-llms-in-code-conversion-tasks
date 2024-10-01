In Go, strings are immutable. Therefore, to achieve the equivalent of concatenating a string in Java, you'll need to create a new string instead of modifying the existing one.

Here's how your code could be translated into idiomatic Go:

```go
package main

import "fmt"

func main() {
    str := "abc"
    fmt.Println(str)
    str = str + "def"
    fmt.Println(str)
}
```

Please note that in Go, `+=` operator doesn't exist for strings. We need to use the `+` operator to concatenate strings, and we also need to assign the result back to the variable.

Also, please remember that unlike Java, Go does not have the concept of static methods or a main method inside a class. In Go, the program execution starts from the `main` function in the `main` package.
