Below is the equivalent Golang code for creating an empty file and directory at two different locations. The Go stdlib `os` and `io/ioutil` packages are used to create files, directories, etc in a similar way as nodejs fs module. 

Please ensure you have necessary permissions while running this program. Creating or writing files in system root location is typically restricted for security reasons. You may need superuser access on some systems.
```go
package main

import (
	"io/ioutil"
	"log"
	"os"
)

func handleErr(err error) {
	if err != nil {
		log.Println(err)
	}
}

func main() {
	err := ioutil.WriteFile("output.txt", []byte{}, 0644)
    handleErr(err)
    
	_, err = os.Stat("/output.txt")
	if os.IsNotExist(err) {
	    err = ioutil.WriteFile("/output.txt", []byte{}, 0644) // file does not exist, create it
        handleErr(err)
	} else {
	   handleErr(err) // something went wrong getting the file info
	}
    
    err = os.Mkdir("docs", 0755)
    handleErr(err)
    
    _, err = os.Stat("/docs")
	if os.IsNotExist(err) {
	    err = os.Mkdir("/docs", 0755) // directory does not exist, create it
        handleErr(err)
	} else {
	   handleErr(err) // something went wrong getting the dir info
	}
}
```
In Golang, if you try to write a file that already exists (e.g., "/output.txt") and not allowed by filesystem permission - it will throw an error without even checking for existing directory or files. Hence we check existence of the target location before trying to create something there.

