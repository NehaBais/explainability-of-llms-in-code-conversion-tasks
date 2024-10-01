 In Go, you can use the `os` package to accomplish this task. Here is how it would look like:

```go
package main

import (
	"io/ioutil"
	"log"
	"os"
)

func main() {
  // Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs".

  // Here in the current working directory.
  err := ioutil.WriteFile("./output.txt", []byte{}, 0640)
  if err != nil {
    log.Fatal(err)
  }

  err = os.MkdirAll("/docs", 0750)
  if err != nil {
    log.Fatal(err)
  }

  // In the filesystem root directory.
  err = ioutil.WriteFile("/output.txt", []byte{}, 0640)
  if err != nil {
    log.Fatal(err)
  }
  
  err = os.MkdirAll("/root/docs", 0750)
  if err != nil {
    log.Fatal(err)
  }
}
```

Please make sure that you have the necessary permissions to create and write files in the filesystem root directory because this might require superuser privileges.
