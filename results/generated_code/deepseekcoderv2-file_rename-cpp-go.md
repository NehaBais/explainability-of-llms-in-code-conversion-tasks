### Answer:

```go
package main

import (
	"fmt"
	"os"
)

func RenameFile(oldPath, newPath string) error {
	err := os.Rename(oldPath, newPath)
	if err != nil {
		return fmt.Errorf("failed to rename file: %v", err)
	}
	return nil
}

func main() {
	err := RenameFile("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = RenameFile("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	}

	err = RenameFile("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = RenameFile("/docs", "/mydocs")
	if err != nil {
		fmt.Println(err)
	}
}
```
