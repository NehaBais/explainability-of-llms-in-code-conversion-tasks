Sure, here is how you can implement this in Go:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil && os.IsExist(err) == false {
		return fmt.Errorf("failed to create directory: %v", err)
	}
	return nil
}

func main() {
	err := mkdirp("./path/to/dir")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
```

Explanation:
1. The `os.MkdirAll` function is used to create a directory named `path`, along with any necessary parents. The permission bits are set to 0755, meaning the owner can read, write and execute, while others can only read and execute.
2. If the directory already exists (i.e., it returns an error of type *os.PathError where err.Err == "file exists"), we ignore this error using `os.IsExist(err)`.
3. The function returns any errors encountered except for the case where the directory already exists.
4. In the `main` function, we use `mkdirp` to create a directory and print an appropriate message based on whether there was an error or not.
