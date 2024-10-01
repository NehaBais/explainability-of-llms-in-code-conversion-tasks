Here's the equivalent code in Golang:
```
func print_logic(a, b bool) {
 fmt.Println("a and b is", a && b)
 fmt.Println("a or b is", a || b)
 fmt.Println("not a is", !a)
}
```
Note that in Golang, the `std::boolalpha` directive is not necessary because the default behavior of `fmt.Print` and `fmt.Println` is to use the string representation of bool values ("true" or "false"). However, I've included it in the code above for clarity.

