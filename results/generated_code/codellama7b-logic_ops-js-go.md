In Go, you can use the following code to achieve the desired functionality:
```
package main

import "fmt"

func logic(a bool, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}
```
The key difference between the two codes is that in Go, you need to use the `fmt` package to print the output, whereas in JavaScript, you can simply use the `console.log()` function to print the output. Additionally, in Go, you need to specify the type of the input parameters (in this case, boolean) when defining the function.
