The Go programming language does not have a built-in library equivalent to `std::filesystem` in C++, but there are alternative packages such as `os` and `io/ioutil` that can be used for file manipulation. Here is how you could rewrite the same logic into Golang:
```go
package main

import (
	"io/ioutil"
	"log"
	"os"
)

func createFile(name string, size int64) error {
	file, err := os.Create(name)
	if err != nil {
		return err
	}
	defer file.Close()
    
	// Resize the file to 0 bytes
	err = os.Truncate(name, 0)
	if err != nil {
	    return err
	}

	return nil
}
  
func createDirectory(name string) error {
	err := os.Mkdir(name, os.ModePerm)
	if err != nil {
		return err
	}
	return nil
}
    
func main()  {
	err := createFile("output.txt", 0)
	if err != nil {
		log.Fatalf("Failed to create file: %v", err)
	}
      
	// Change the working directory to root("/") and perform actions there
	if err = os.Chdir("/"); err != nil {
	    log.Fatal(err)
	}
    
	err = createFile("output.txt", 0)
	if err != nil {
		log.Fatalf("Failed to create file: %v", err)
	}
      
	err = createDirectory("docs")
	if err != nil {
		log.Fatalf("Failed to create directory: %v", err)
	} 
}
```
This code will create a "output.txt" and an empty "docs" directory in the current working directory, and also in the root ("/") directory of your filesystem. It's important to note that creating directories in certain file paths may require superuser permissions or elevated execution rights. 
Also, `os.Chdir("/")` is equivalent to changing the working directory to root("/"). However, it doesn't create a new "docs" folder there and you might want to handle this differently if needed.

