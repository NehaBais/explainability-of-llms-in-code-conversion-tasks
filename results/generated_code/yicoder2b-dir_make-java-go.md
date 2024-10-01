Sure, here is the equivalent Golang code for your Java function:

```go
package main
import "os"

func main() {
   err := createDir("C:/parent/test")
   if err != nil {
      println("Error creating directory:", err.Error())
   } else {
      println("Directory created successfully")
   }
}

// Function to create directories recursively
func createDir(path string) (err error) {
    return os.MkdirAll(path, 0755)
}
```
This Golang code does the same thing as the Java program: it creates a directory and any missing parent directories. It also prints out an error if there is one, similar to the way the Java program does. However, in Go, errors are usually represented with the first parameter being an error itself. If there's no error (i.e. the directory was successfully created), it returns nil.
This code will work on Windows and Linux/macOS. The path may need to be adjusted depending on your specific requirements. 

Also remember that in Go, file paths must end with a '/'. If you want to create subdirectories as well (which is the same as the behavior of the `mkdir -p` command in the Java program), then you could add code to recursively call this function for each parent directory separately.
