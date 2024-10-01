In Golang, you can use the `os` package to create new files and directories. Here is a conversion of your Python code into Go:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func create(directory string) {
	err := ioutil.WriteFile(directory+"/output.txt", []byte{}, 0644)
	if err != nil {
		log.Fatal(err)
	}

	err = os.Mkdir(directory+"/docs", 0755)
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
```

Note: The permissions specified in the `os.Mkdir` call (0755) are default unix file permissions. It's also worth noting that `ioutil.WriteFile()` is used to create an empty file, which requires at least `w` (write) permission.
