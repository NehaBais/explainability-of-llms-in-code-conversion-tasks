package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0777) // 0777 is used to specify the file mode, but it's ignored on some platforms
	if err != nil {
		fmt.Println("An Error Occurred:", err)
		return
	}
	fmt.Println("Directory created successfully.")
}
