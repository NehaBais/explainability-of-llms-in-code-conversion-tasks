package main

import (
	"fmt"
	"os"
	"strings"
)

func mkdirP(path string) error {
	for _, p := range strings.Split(path, "/") {
		if len(p) == 0 { // ignore empty path parts
			continue
		}
		dirPath := fmt.Sprintf("%s%s", path, p)
		err := os.Mkdir(dirPath, 0755)
		if err != nil && !os.IsExist(err) {
			return err
		}
	}
	return nil
}

func main() {
	path := "./path/to/dir"
	err := mkdirP(path)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
