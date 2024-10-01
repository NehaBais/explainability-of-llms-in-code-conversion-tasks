The equivalent Go code would be:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Create an empty file named "output.txt" in the current directory and root
	for _, path := range []string{".", "/"} {
		file, err := os.Create(path + string(os.PathSeparator) + "output.txt")
		if err != nil {
			fmt.Println("Error creating file: ", err)
			return
		}
		file.Close()

		// Create an empty directory named "docs" in the current directory and root
		err = os.Mkdir(path+string(os.PathSeparator)+"docs", 0755)
		if err != nil {
			fmt.Println("Error creating dir: ", err)
			return
		}
	}

}
```

Note: The `os.Create()` function is used to create a new file and the `os.Mkdir()` function is used to create a new directory with the specified permissions. Please replace the "/" in the code with the correct path if necessary.
