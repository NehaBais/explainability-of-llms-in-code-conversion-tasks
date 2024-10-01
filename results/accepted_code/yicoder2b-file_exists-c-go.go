package main

import (
    "os"
    "path/filepath"
)

func checkFile(filename string, root "") bool {
    f, err := os.Stat(filename)
    if err != nil {
        return false
    }
    _, isReg := filepath.IsAbs(filename), f.IsDir()
    return isReg && f.Mode()&0177 == 0
}

func main() {
    printf("%s is a regular file? %s\n", "input.txt", checkFile("input.txt", "") ? "yes" : "no")
    printf("docs is a directory? %s\n", checkFile("docs", "/") ? "yes" : "no")
    printf("%s is a regular file? %s\n", "/input.txt", checkFile("/input.txt", "") ? "yes" : "no")
    printf("/docs is a directory? %s\n", checkFile("/docs", "/") ? "yes" : "no")
}