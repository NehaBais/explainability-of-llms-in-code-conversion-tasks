The error message indicates that the `strconv` package is not defined, so we need to import it. The correct way to do this is by adding `import " strconv"` at the top of the file.
The fix for the error is to import the `strconv` package before using its functions in the code.
Here's the corrected code:
```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	nbr1, _ := strconv.Atoi(scanner.Text())

	scanner.Scan()
	nbr2, _ := strconv.Atoi(scanner.Text())

	switch {
	case nbr1 < nbr2:
		fmt.Println(nbr1, "is less than", nbr2)
	case nbr1 > nbr2:
		fmt.Println(nbr1, "is greater than", nbr2)
	default:
		fmt.Println(nbr1, "is equal to", nbr2)
	}
}
```
The code is now correctly formatted and imports the `strconv` package before using its functions in the switch statement.

