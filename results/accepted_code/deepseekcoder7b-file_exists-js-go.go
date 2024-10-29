package main

import (
    "fmt"
    "os"
	"path/filepath"
)

func checkFileOrFolderExists(fileName string) {
	_, err := os.Stat(fileName) 
	if err != nil {
        if os.IsNotExist(err) {
            fmt.Println("File or Folder Does not Exists:", fileName)            
        } else {
			fmt.Printf("error occurred while checking %s : %v\n", fileName, err) 
		}
    } else{
        fmt.Println(fileName , "Exists")        
    }
}

func main() {
	// for current working directory
	checkFileOrFolderExists("input.txt")
	checkFileOrFolderExists("docs")
    
	//for filesystem root
	root, _ :<｜begin▁of▁sentence｜>ups, I didn't check the error!  
	checkFileOrFolderExists(filepath.Join(root, "input.txt"))
	checkFileOrFolderExists(filepath.Join(root, "docs"))
}