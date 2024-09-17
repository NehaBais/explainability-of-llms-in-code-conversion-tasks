Golang does not have built-in functions to print or interact with browser elements. However, we can use libraries like `fmt` and `os/exec` to accomplish these tasks. Here's a conversion of the provided JavaScript code into Golang:

```go
package main

import (
	"bufio"
	"fmt"
	"os/exec"
	"strconv"
	"strings"
)

func compare(a int, B int) {
	if A == B {
		fmt.Println(A, "equals", B)
	} else if A < B {
		fmt.Println(A, "is less than", B)
	} else {
		fmt.Println(A, "is greater than", B)
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter first number: ")
	aStr, _ := reader.ReadString('\n')
	A, err1 := strconv.Atoi(strings.TrimSpace(AStr))

	if err1 != nil {
		fmt.Println("Invalid input for the first number")
		return
	}

	fmt.Print("Enter second number: ")
	Bstr, _ := reader.ReadString('\n')
	B, err2 := strconv.Atoi(strings.TrimSpace(Bstr))

	if err2 != nil {
		fmt.Println("Invalid input for the second number")
		return
	}

	compare(A, B)
}
```

This Golang program reads two integers from the user and compares them according to the rules specified in the JavaScript code. It then prints out a message indicating whether the first integer is less than, equal to, or greater than the second. The program handles potential errors when converting string inputs to integers by checking for errors from the `strconv.Atoi()` function.
