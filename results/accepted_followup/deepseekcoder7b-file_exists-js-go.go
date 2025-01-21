package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkFileOrFolderExists(fileName string) error {
	_, err := os.Stat(fileName)
	if err != nil {
		if os.IsNotExist(err) {
			return fmt.Errorf("File or Folder Does not Exists: %s", fileName)
		} 
        return fmt.Errorf("error occurred while checking %s : %v", fileName, err)
     }
    return nil
}

func main() {
	// for current working directory
	err := checkFileOrFolderExists("input.txt")
	if err != nil {
		fmt.Println(err)
	}
	err = checkFileOrFolderExists("docs")
	if err != nil {
		fmt.Println(err)
	}
    
	//for filesystem root
	root := "/"  // filesystem root in Unix-based systems is represented by `/`
	err = checkFileOrFolderExists(filepath.Join(root, "input.txt"))
	if err != nil {
		fmt.Println(err)
	}
	err = checkFileOrFolderExists(filepath.Join(root, "docs"))
	if err != nil {<｜begin▁of▁sentence｜>
    fmt.Println(err)
}