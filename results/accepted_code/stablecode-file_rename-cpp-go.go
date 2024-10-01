package main

import (
	"os"
	"syscall"
)

func renameFile(src, dest string) {
	_, err := os.Rename(src, dest)
	if err != nil {
		if errorIsNotFound(err) {
			createParentDirIfNotExists(dest)
			if !fileExist(dest) {
				syscall.Rename(src, dest)
			}

		} else if errorIsPermission(err) {
			// handle permission denied error
		} else {
			// handle other errors like file already exist etc.
		}
	}
}

func main() {

	renameFile("input.txt", "output.txt")
	renameFile("docs", "mydocs")
	renameFile("/input.txt", "/output.txt")
	renameFile("/docs", "/mydocs")

}
