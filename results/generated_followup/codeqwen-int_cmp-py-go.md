The error occurs because the variables A and B are declared but not used inside the if-Else If-Else statement.

Here is the fixed code:
```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Println("Enter value of a:")
	A, _ := reader.ReadString('\n')
	A = strings.TrimSpace(A)
	i1, _ := strconv.Atoi(A)

	fmt.Println("Enter value of b:")
	B, _ := reader.ReadString('\n')
	B = strings.TrimSpace(B)
	i2, _ := strconv.Atoi(B)

	if i1 < i2 {
		fmt.Printf("%d is less than %d\n", i1, i2)
	} else if i1 > i2 {
		fmt.Printf("%d is greater than %d\n", i1, i2)
	} else if i1 == i2 {
		fmt.Printf("%d is equal to %d\n", i1, i2)
	}
}
```

In this code, I removed the unused variables A and B from the If-Else If-Else statement.
