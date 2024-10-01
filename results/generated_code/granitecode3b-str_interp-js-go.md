Here's the equivalent Golang code for the given JavaScript code:
```
package main
import (
 "fmt"
)
func main() {
 original := "Mary had a X lamb"
 little := "little"
 replaced := fmt.Sprintf(original, little) // uses string interpolation to replace X with little
 fmt.Println(replaced) // prints Mary had a little lamb
}
```
Explanation: 
- The `fmt` package is imported to use the `Sprintf()` function for string interpolation.
- The original string, "Mary had a X lamb", is defined as a variable called `original`.
- A new variable called `little`, with a value of "little", is also defined.
- The `replaced` variable is then assigned the result of calling `Sprintf()` on the `original` string and passing in the `little` variable as a parameter. This will replace all occurrences of "X" in the original string with the value of `little`.
- Finally, the `fmt.Println()` function is used to print the `replaced` string to the console.

