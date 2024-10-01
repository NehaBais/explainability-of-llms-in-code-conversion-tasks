Below is the conversion of C++ code to Golang:

In Go, there's no explicit "main" function like in C++. Instead, we simply call our `print_logic` function directly within the script execution. 

```go
package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {

	fmt.Println("a and b is ", a && b)
	fmt.Println("a or b is ", a || b)
	fmt.Println("not a is ", !a))
}

func main() {
	printLogic(true, false) 
}
```
In the above GoLang code:
- A function called `printLogic` that accepts two boolean variables (`a`, and `b`) has been defined. This function prints the result of 'AND', 'OR' and 'NOT' on both arguments as required by the original problem statement.
- Inside the `main` function, the `printLogic` function is called with two boolean values (`true` and `false`) passed to it. The `printLogic` function then prints out the results of its logical operations.
- Finally, the main function exits, which terminates the execution of the program.
