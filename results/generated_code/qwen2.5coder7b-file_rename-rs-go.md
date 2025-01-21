Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	err := "File move error"

	if err != nil {
		fmt.Println(err)
		return
	}

	if err = os.Rename("input.txt", "output.txt"); err != nil {
		fmt.Println(err)
		return
	}
	
	if err = os.Rename("docs", "mydocs"); err != nil {
		fmt.Println(err)
		return
	}
	
	if err = os.Rename("/input.txt", "/output.txt"); err != nil {
		fmt.Println(err)
		return
	}

	if err = os.Rename("/docs", "/mydocs"); err != nil {
		fmt.Println(err)
		return
	}

	fmt.Println("All operations completed successfully")
}
```
This Go program does the same thing as your Rust code. It will rename "input.txt" to "output.txt", "docs" to "mydocs" in the current working directory and also the root of the filesystem. The os.Rename function is used for renaming files and directories, similar to fs::rename in Rust. Please note that due to system permissions, this Go program might not run successfully on some systems where the user does not have sufficient rights.
