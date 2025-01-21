In Go, the code would look like this:

```go
package main

import (
	"fmt"
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

In Go, the `bufio` package provides a way to read from and write to streams such as the standard input/output. The `strings.Split` function is used for splitting the string entered by the user into individual integers. And in Go, `fmt.Printf` is used for printing messages.
