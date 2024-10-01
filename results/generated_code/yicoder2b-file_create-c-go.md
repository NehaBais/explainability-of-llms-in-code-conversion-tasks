The equivalent code in Golang would be:

```golang
package main

import (
	"os"
	"fmt"
	"path/filepath"
)

func main() {
	/* Create output.txt */
	file, err := os.Create("output.txt")
	if err != nil {
		fmt.Printf("Failed to create file: %s\n", err)
		return
	}
	defer file.Close()

	/* Create docs/ directory */
	err = os.Mkdir("docs", 0750) // same permissions as in the C code
	if err != nil {
		fmt.Printf("Failed to create directory: %s\n", err)
		return
	}
	/* Go does not automatically change permission of new files. 
	You should handle this manually or use utility functions provided by the os package */

	/* Change the mode of created directories */
	_, err = os.Stat("docs/") // stat the file to get its mode
	if err == nil {
		os.Chmod("docs/", 0750) // same permissions as in C code
	} else {
		fmt.Printf("Failed to set directory permissions: %s\n", err)
	}
}
```
Please note that both codes assume the user has write access to the directories and files being operated on. You might need to handle permission checking and errors accordingly for your specific use case. Also remember that Go's filesystem APIs don't have a built-in way to create directories with specified permissions, so you may have to change or ignore the error if it occurs.
