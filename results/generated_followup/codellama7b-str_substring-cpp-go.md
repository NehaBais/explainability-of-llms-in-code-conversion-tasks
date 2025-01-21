
The error message is indicating that the `strings.Index()` function can only be used with strings, but you are passing it a variable of type `rune`, which is a single Unicode character. This is not allowed in Go.

To fix this, you need to convert the `c` variable from type `rune` to type `string`. You can do this by adding a call to the `string()` function, like so:
```go
fmt.Println(strings.Index(s, string(c))) // starting from a known character within the string and of m length
```
This will convert the `rune` value of `c` into a `string`, which can then be used as an argument to the `strings.Index()` function.
