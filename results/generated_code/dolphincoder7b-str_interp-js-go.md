To convert the JavaScript code to Golang, we need to translate the function signature and the variable declaration into Go equivalents. Here's a translation:
```go
package main
import "fmt"
func main() {
    var original = "Mary had a X lamb."
    var little = "little"
    var replaced = original.replace("X", little)  // does not change the original string
    fmt.Println(replaced)
}
```
In this Go code, we declare three variables: `original`, `little`, and `replaced`. The `original` variable is assigned a string value of "Mary had a X lamb." The `little` variable is initialized with another string value of "little". The `replace` function call within the assignment statement assigns the result of replacing "X" in `original` with the value of `little`, which doesn't change `original`. The result of the replacement operation is assigned to the `replaced` variable. Finally, we print the value of the `replaced` variable using the `fmt.Println()` function call.
