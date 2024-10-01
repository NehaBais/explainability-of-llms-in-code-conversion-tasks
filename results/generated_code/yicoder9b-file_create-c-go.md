Below is the equivalent Golang code:

```Go
package main

import (
	"os"
)

func main() {
	createFileAndDir("./")
	createFileAndDir("/")
}

func createFileAndDir(path string) {
	// Create a file called "output.txt" of size 0 bytes.
	f, _ := os.Create(path + "output.txt")
	defer f.Close()

	// Create an empty directory called "docs".
	os.Mkdir(path+"docs", os.FileMode(0750)) // permissions are after umask
}
```
