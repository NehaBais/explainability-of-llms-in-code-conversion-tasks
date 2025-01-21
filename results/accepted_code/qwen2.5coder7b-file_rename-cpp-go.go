package main

import (
	"os"
)

func renameFile(oldName string, newName string) {
	err := os.Rename(oldName, newName)
	if err != nil {
		panic(err)
	}
}

func main() {
	cwd, _ := os.Getwd()
	renameFile(cwd+"/input.txt", cwd+"/output.txt")
	renameFile(cwd+"/docs", cwd+"/mydocs")

	root := "/"
	renameFile(root+"input.txt", root+"output.txt")
	renameFile(root+"docs", root+"mydocs")
}
