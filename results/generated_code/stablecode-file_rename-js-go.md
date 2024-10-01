The equivalent code in Golang would be:

```go
import (
	"io/ioutil"
	"os"
	"path/filepath"
)

func main() {
	fso := &FileSystemObject{} // Assume the existence of this custom wrapper around the JS FileSystemObject.

	err := fso.MoveFile("input.txt", "output.txt")
	if err != nil {
		// Handle error
		panic(err)
	}
	
	err = fso.MoveFile("c:/input.txt", "c:/output.txt")
	if err != nil {
		// Handle error
		panic(err)
	}

	err = fso.MoveFolder("docs", "mydocs")
	if err != nil {
		// Handle error
		panic(err)
	}

	err = fso.MoveFolder("c:/docs", "c:/mydocs")
	if err != nil {
		// Handle error
		panic(err)
	}
}
```
This assumes the existence of a `FileSystemObject` wrapper around the JS FileSystemObject.

Please note that Golang doesn't have direct access to the file system like JavaScript does with the ActiveXObject. So, we need to make use of packages like "io/ioutil" for handling files and folders, "os" for operating on the OS level, and "path/filepath" for manipulating paths.
