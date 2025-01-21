package main

import (
		"fmt"
		"io/ioutil"
		"os"
		"path"

		"runtime"
)

func main() 
{

    // For the current working directory.
    currentDir := "./"
    if exists(currentDir) 
    {
        fmt.Println("Current Directory Exists")
    } else 
    {
        fmt.Println("Current Directory Does Not Exist")
    }

    // For a file and a directory in the filesystem root.
    rootDir := "/"
    if exists(rootDir) 
    {
        fmt.Println("Root Directory Exists")
    } else 
    {
        fmt.Println("Root Directory Does Not Exist")
    }

}

// Function to check if a directory or file exists at the given path.
func exists(checkPath string) bool 
{

    if runtime.GOOS == "windows" {
        _, err := os.Stat(checkPath)
        if err == nil 
        {
            return true
        }
    } else if runtime.GOOS == "linux" || runtime.GOOS == "macos" {

    _, err := os.Stat(checkPath)
    if err == nil 
    {
        return true
    }
    }

		// If the file or directory does not exist, return false.
		return false
}