Here is the equivalent code in Go:

```go
package main

import (
	"os"
	"log"
)

func main() {
	// Rename file in current working directory.
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		log.Fatalln("File move error: ", err))
	}

	// Rename directory in current working directory.
	if err := os.Rename("docs", "mydocs"); err != nil {
		log.Fatalln("Directory rename error: ", err))
	}

	// Repeat the process once more from filesystem root.
	if err := os.Rename("/input.txt", "/output.txt"); err != nil {
		log.Fatalln("File move error: ", err))
	}

	if err := os.Rename("/docs", "/mydocs"); err != nil {
		log.Fatalln("Directory rename error: ", err))
	}
}
```
This code performs the same function as your provided Rust code. It renames a file and a directory in the current working directory, then repeats this process once more from the filesystem root. The `os.Rename` function is used to perform the file/directory rename operations. If any errors occur during these operations, the `log.Fatalln` function is used to print an error message and terminate the program.
