 Below is the equivalent Go code for creating a directory and any missing parents in the specified path:

```Go
package main
import (
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}

func main(){
	err := mkdirp("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
```
In Go, the `os.MkdirAll` function is used to create a directory and its parents if they do not exist, similar to Python's `os.makedirs`. The second parameter is permission mask, you can modify it as per your requirements. 
The error handling in this case is done using panic instead of return which depends on your application requirement. In a production setting, always consider error handling strategies beyond just panicking or returning the error.
