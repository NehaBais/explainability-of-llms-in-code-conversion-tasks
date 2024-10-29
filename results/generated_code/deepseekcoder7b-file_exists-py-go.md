Here is the equivalent Golang code for your Python snippet to check if a file and directory exist:

For current working directory, use `os.Stat` function with path of "input.txt" and "docs". If no error occurred that means files/directories are present in the path. 

```go
package main

import (
	"fmt"
	"os"
)

func checkFile(path string) {
	_, err := os.Stat(path)
	if err == nil {
		fmt.Println("Path", path, "exists")
	} else if os.IsNotExist(err) {
	    fmt.Println("Path", path, "does not exist")    
	} else {
	    fmt.Printf("error occurred: %s\n", err)  
	}	
} 

func main() {
    checkFile("input.txt")
    checkFile("docs")     
}
```

For the filesystem root directory, you may need to provide an absolute path ("/input.txt" and "/docs"). Be careful with this approach though as it might not work on all platforms. 

package main

import (
	"fmt"
	"os"
)

func checkFile(path string) {
	_, err :<｜begin▁of▁sentence｜> := os.Stat(path)<｜end▁of▁sentence｜>
	if err == nil {
	    fmt.Println("Path", path, "exists")    
	} else if os.IsNotExist(err) {
	    fmt.Println("Path", path, "does not exist")   
	} else {
		fmt.Printf("error occurred: %s\n", err)  
	}	
} 

func main() {
    checkFile("/input.txt")
    checkFile("/docs")     
}

