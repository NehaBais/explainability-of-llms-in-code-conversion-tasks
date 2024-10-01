Golang doesn't have a built-in function for rename but it has the `os.Rename()` function that can be used to perform this task:

Here is how you can do it in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	}

	dir, err := os.Getwd()
	if err != nil {
		fmt.Println(err)
	}

	err = os.Chdir("/")
	if err != nil {
		fmt.Println(err)
	}

	err = os.Rename(dir+"/input.txt", dir+"/output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = os.Rename(dir+"/docs", dir+"/mydocs")
	if err != nil {
		fmt.Println(err)
	}

	os.Chdir(dir) // go back to the original directory
	if err != nil {
		fmt.Println(err)
	}
}
```
This code first renames files and directories in the current working directory, then it changes directory to root using `os.Chdir()` and then performs operations there. After that, it returns back to original directory using `os.Chdir()`.

Please note that this will only work if you have appropriate permissions and the paths specified are valid.
