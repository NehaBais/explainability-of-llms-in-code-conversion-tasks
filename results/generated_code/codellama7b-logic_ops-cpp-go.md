This code takes two boolean values and prints the result of logical operations on them. Here's how you can implement this function in Go:

```go
func printLogic(a, b bool) {
    fmt.Println("a and b is", a && b)
    fmt.Println("a or b is", a || b)
    fmt.Println("not a is", !a)
}
```
Note that in Go, we use the `fmt` package to print values to the console. Also, note that Go uses the `&&` and `||` operators for logical AND and OR operations, respectively. Finally, the `!` operator is used to negate a boolean value.
