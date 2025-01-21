The error occurred because we imported "io/ioutil" but it was not used anywhere in our program, hence the compiler is telling us about the unused import statement. The fix to this issue is very simple - remove the unused import statement. After removing that, the code should work just fine without any issues and produce the same results as your original JavaScript code. Here's the corrected version:

```go
package main

import (
	"log"
	"os"
)

func main() {
	createFile("output.txt", "")
	createFile("/output.txt", "")

	createDir("docs")
	createDir("/docs")
}

// create a file and write content to it
func createFile(name string, content string) {
	f, err := os.Create(name)
	if err != nil {
		log.Fatal(err)
	}
	defer f.Close()

	_, err = f.WriteString(content)  // use the WriteString method instead of io.WriteString
	if err != nil {
		log.Fatal(err)
	}
}

// create a directory
func createDir(name string) {
	err := os.Mkdir(name, 0750)
	if err != nil {
		log.Fatal(err)
	}
}
```
