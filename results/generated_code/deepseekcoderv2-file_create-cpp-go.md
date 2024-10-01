Here is the Golang code:
```
package main

import (
	"os"
)

func main() {
	f, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	f.Close()

	g, err := os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	g.Close()

	err = os.Mkdir("docs", 0755)
	if err != nil {
		panic(err)
	}

	err = os.Mkdir("/docs", 0755)
	if err != nil {
		panic(err)
	}
}
```
