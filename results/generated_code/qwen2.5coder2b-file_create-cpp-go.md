The equivalent Golang code would look like this:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"

	"path/filepath"
)

func main() {
	err := ioutil.WriteFile(filepath.Join(".", "output.txt"), []byte{}, 0)
	if err != nil {
		fmt.Println("Error creating file:", err)
		return
	}

	err = os.MkdirAll(filepath.Join("/", "docs"), 0777)
	if err != nil {
		fmt.Println("Error creating directory:", err)
		return
	}
}
```

This code will create a new file named `output.txt` in the current working directory and an empty directory named `docs`. It also creates another directory (`/docs`) at the filesystem root. The `ioutil.WriteFile()` function is used to write data into a file, while `os.MkdirAll()` is used to create directories recursively. Note that the creation mode `0777` gives all users full read and write permissions.
