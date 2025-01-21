The error occurred because Go does not have a standard library package called `bufio`. It has its own package for similar functionality, which is named ` bufio`. Similarly, it also doesn't have a built-in `os` package to access the system's input/output streams, and it has no predefined function named `strings`. To fix these errors, you need to import the `io`, `fmt`, and `strconv` packages.

The corrected code is written as follows:

```go
package main

import (
	 bufio
	"fmt"
	"os"
	"strconv"
)

func main() {
	var reader = bufio.NewReader(os.Stdin)
	fmt.Print("Enter two integers: ")
	nums, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println(err)
		return
	}
	nums = strings.TrimSpace(nums)

	var a int
	var b int

	numsSplit := strings.Fields(nums)
	a, err = strconv.Atoi(numsSplit[0])
	if err != nil {
		fmt.Println(err)
		return
	}

	b, err = strconv.Atoi(numsSplit[1])
	if err != nil {
		fmt.Println(err)
		return
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b)
	case a == b:
		fmt.Printf("%d equals %d\n", a, b)
	default:
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
