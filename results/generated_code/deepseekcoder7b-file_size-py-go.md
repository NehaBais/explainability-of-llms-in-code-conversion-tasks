Here is the equivalent Go code for your Python snippet, using "os" package to get file size. Note that in Go it's more common to check errors after operations like this:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
)

func fileSize(filePath string) {
	size, err := ioutil.ReadFile(filePath)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Size of the file is:", len(size))
}

func main() {
	// For 'input.txt' in current directory
	fileSize("./input.txt") 
    
    // For '/input.txt' at root directory
	fileSize("/input.txt")  
}
```
This Go program checks the size of `input.txt`, also known as "./input.txt" for current working directory and "/input.txt" or any path you specify in the function call to fileSize(). Remember that reading a non-existing file might cause an error so it's always good practice to handle errors.

