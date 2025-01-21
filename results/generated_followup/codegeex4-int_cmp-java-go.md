The error occurs because `strconv.Atoi` expects a string as its argument but is being given a string with newline characters at the end. These can be removed by using strings' `TrimSpace()` function before parsing.

Here's the corrected Go code:

```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter the first integer: ")
	nbr1, _ := strconv.Atoi(reader.ReadString('\n'))
	nbr1 = nbr1 / 10 // remove newline characters

	fmt.Print("Enter the second integer: ")
	nbr2, _ := strconv.Atoi(reader.ReadString('\n'))
	nbr2 = nbr2 / 10 // remove newline characters

	if nbr1 < nbr2 {
		fmt.Println(nbr1, "is less than", nbr2)
	}

	if nbr1 > nbr2 {
		fmt.Println(nbr1, "is greater than", nbr2)
	}

	if nbr1 == nbr2 {
		fmt.Println(nbr1, "is equal to", nbr2)
	}
}
```
