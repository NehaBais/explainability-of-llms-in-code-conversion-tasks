In Go, you can use the `os` package to handle file system operations. Here is how you could implement your JavaScript code in Go:

```go
package main

import (
	"log"
	"os"
)

func fct(err error) {
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	err := os.WriteFile("output.txt", []byte(""), 0644)
	fct(err)

	root, err := os.Open("/")
	fct(err)

	defer root.Close()

	err = os.Mkdir("docs", 0755)
	fct(err)
	
	err = os.Mkdir("/docs", 0755)
	fct(err)
}
```
This program will create an empty file called "output.txt" and an empty directory named "docs". It does this in the current working directory as well as in the root of the filesystem. Note that you should run this as an administrator, because creating a new file or directory in the root requires elevated permissions on Unix-like systems.

Also please note that Go doesn't support the "/" root path in the same way Node.js does. Instead, we use `os.Open("/")` to get the root directory. This will likely return an error if run as a regular user because it is not possible for non-root users to open the root directory directly.
