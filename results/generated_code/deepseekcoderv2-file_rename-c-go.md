*/
```go
package main

import (
	"fmt"
	"os"
)

func check(e error) {
	if e != nil {
		fmt.Println("Error")
	}
}

func main() {
	dir, err := os.Getwd() // get current working directory
	check(err)
	err = os.Rename(fmt.Sprintf("%s/input.txt", dir), fmt.Sprintf("%s/output.txt", dir))
	check(err)
	err = os.Rename("docs", "mydocs")
	check(err)
	err = os.Rename("/input.txt", "/output.txt")
	check(err)
	err = os.Rename("/docs", "/mydocs")
	check(err)
}
```