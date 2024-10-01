Below is the Golang equivalent of your C++ code:

```go
package main

import (
	"os"
	"syscall"
)

func renameFile(src, dest string) {
	_, err := os.Rename(src, dest)
	if err != nil {
		if errorIsNotFound(err) {
			createParentDirIfNotExists(dest)
			if !fileExist(dest) {
				syscall.Rename(src, dest)
			}

		} else if errorIsPermission(err) {
			// handle permission denied error
		} else {
			// handle other errors like file already exist etc.
		}
	}
}

func main() {

	renameFile("input.txt", "output.txt")
	renameFile("docs", "mydocs")
	renameFile("/input.txt", "/output.txt")
	renameFile("/docs", "/mydocs")

}
```
This Golang code renames a file called `input.txt` into an `output.txt`. It also moves (renames) the directory named `docs` to be named `mydocs`. This is done twice, once in the current working directory and again in the root filesystem directory.

Please remember to handle errors properly according to your requirements. Some of the error handling conditions are already added into the code above as comments. You need to remove these comments or modify them as per your requirement.
