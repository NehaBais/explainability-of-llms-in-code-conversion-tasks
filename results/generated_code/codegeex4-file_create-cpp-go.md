The equivalent Golang code would be:

```go
package main

import (
	"os"
	"log"
	"io/ioutil"
)

func main() {
	err := os.WriteFile("./output.txt", []byte{}, 0644)
	if err != nil {
		log.Fatal(err)
	}

	err = ioutil.WriteFile("/output.txt", []byte{}, 0644)
	if err != nil {
		log.Fatal(err)
	}

	err = os.Mkdir("docs", 0755)
	if err != nil {
		log.Fatal(err)
	}

	err = os.MkdirAll("/docs", 0755)
	if err != nil {
		log.Fatal(err)
	}
}
```

This program creates two empty files "output.txt" and a directory "docs" in the current working directory and also does the same in the root directory. The permissions for these are set to read/write for the owner (0644), and rwxr-xr-x for others respectively. Note that writing to "/" generally requires superuser privileges which might not be available on all systems, so you should run this code with "sudo" or as a superuser if necessary. The os.MkdirAll is used instead of Mkdir because it creates any necessary parent directories when creating the directory "/docs".
