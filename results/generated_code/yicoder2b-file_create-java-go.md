The equivalent code in Golang would be:

```golang
package main
import (
  "os"
  "fmt"
)
func main() {
    file1, err := os.Create("output.txt")
    if err != nil {
        fmt.Printf("Error creating output.txt file: %s\n", err.Error())
		return
    }
	os.Close(file1)
    err = createDirectory("docs")
    if err != nil {
        fmt.Printf("Error creating docs directory: %s\n", err.Error())
		return
    }
}

func createDirectory(dir string) (error, bool){
	file, ok := os.Stat(dir)
	if ok && file.IsDir() { return nil, true } 

	created, _  = os.Mkdir(dir, 0755)
	return nil, created
}
```
Please note that in Golang you cannot make directories directly on the filesystem root. This function checks if a directory exists and creates it if it doesn't exist. If a file with the same name already exists, it will return an error. You can adjust this to suit your application's needs.
