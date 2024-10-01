Sure, here's the equivalent Golang code for the given JavaScript code:
```
package main
import "fmt"
func main() {
 fmt.Println(
 "abcd" == "abcd", // true
 "abcd" === "abcd", // true
 "123" == 123, // true (implicit type conversion)
 "123" === 123, // false ( implicit type conversion)
 "ABCD" == "abcd", // false
 "ABCD" != "abcd", // true
 "123" != 123, // false (implicit type conversion)
 "123" !== 123, // true (implicit type conversion)
 "dcba" < "abcd", // true
 "dcba" > "abcd", // false
 strings.ToLower("ABCD") == strings.ToLower("abcd"), // true (case insensitive)
 )
}
```
The `fmt` package is used to print the results of the comparisons. The `strings.ToLower()` function is used to perform a case-insensitive comparison. Note that in Golang, string and numeric values can be compared using the equality operator (`==`). However, for type safety, it's recommended to use the strict equality operator (`===`) when comparing string and numeric values.

