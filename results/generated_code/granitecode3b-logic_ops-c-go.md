Sure! Here's the equivalent Golang code for the given C code:
```
func printLogic(a, b bool) {
 fmt.Printf("a and b is %t\n", a && b)
 fmt.Printf("a or b is %t\n", a || b)
 fmt.Printf("not a is %t\n", !a)
}
```
In Golang, `bool` is a built-in type that represents boolean values, and the logical operators `&&`, `||`, and `!` are used to perform operations on them. The `fmt.Printf()` function is used to print the results of the logical operations to the console. 
Note that in Golang, boolean values are represented as either `true` or `false`, so you need to use single quotes (`'`) around `true` and `false` when defining them in the function signature. Also, make sure to import the `fmt` package at the top of your file to use its functions.

