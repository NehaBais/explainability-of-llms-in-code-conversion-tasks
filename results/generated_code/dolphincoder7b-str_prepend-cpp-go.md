This is how you can convert the given C++ code to Golang using the `strings` package:

```go
package main
import (
    "strings"
    "fmt"
)
func main() {
    myStrings := []string{"prepended to", "my string"}
    prepended := strings.Join(myStrings, "")
    fmt.Println(prepended)
}
```

In this code:

1. We import the `strings` package and `fmt` package. The `fmt` package is used for printing the result of the program.

2. We define a slice called `myStrings` that contains two string values, "prepended to" and "my string".

3. We use the `strings.Join()` function to join all the elements in `myStrings` into one string using an empty separator. This is done by passing `myStrings` to `strings.Join()`. The resulting joined string is assigned to a variable called `prepended`.

4. Finally, we print the value of `prepended` using the `fmt.Println()` function.

Note: Make sure you have the necessary dependencies (including the `strings` package) installed in your Golang environment for this code to work properly.
