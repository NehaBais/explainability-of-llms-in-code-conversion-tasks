The error occurs because "fmt" package is imported but not used in our program.

Fix: Remove unnecessary import statement by removing line `import "fmt"`

Rewritten corrected code:

```go
package main

import (
	"io/ioutil"
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
