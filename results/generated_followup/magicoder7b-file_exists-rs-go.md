 The error is because "path/filepath" package was not used inside the function checkFile(). So, either remove the import or add the use of filepath.Separator in the checkFile() function.

Corrected Code:
```go
package main

import (
	"fmt"
	"os"
)

func checkFile(fileName string) {
	_, err := os.Stat(fileName)
	if err == nil {
		// path exists, get file info
		info, _ := os.Stat(fileName)
		if info.IsDir() {
			fmt.Println(fileName + " is a directory")
		} else {
			fmt.Println(fileName + " is a file")
		}
	} else {
		// path does not exist
		fmt.Println(fileName + " does not exist")
	}
}

func main() {
	checkFile("./input.txt")
	checkFile("/tmp/input.txt") // change /tmp to match your OS root directory
	checkFile("./docs")
	checkFile("/tmp/docs") // change /tmp to match your OS root directory
}
```
