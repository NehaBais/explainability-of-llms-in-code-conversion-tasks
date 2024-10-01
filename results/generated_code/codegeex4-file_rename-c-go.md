The equivalent code in Golang would be:

```go
package main

import (
	"log"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}

	// Need root privileges to rename files in the root directory
	rootDir, _ := os.Getwd()
	err = os.Chdir("/")
	if err != nil {
		log.Fatal(err)
	}
	defer func() {
		err = os.Chdir(rootDir)
		if err != nil {
			log.Fatal(err)
		}
	}()

	err = os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}
}
```
Please note that running the second part of the script (renaming files in the root directory) requires root privileges. The program first changes its current working directory to the root directory, then it performs renaming operations.

After these operations, the program returns back to the original directory using `defer`. However, if there is an error while changing directories back, it will be logged and the program will terminate.
