package main

import (
	"io/ioutil"
	"os"
	"path/filepath"
)

func rename(oldname string, newname string) error {
	tempFile, err := ioutil.TempFile("", "")
	if err != nil {
		return err
	}
	defer os.Remove(tempFile.Name()) // clean up

	_, err = tempFile.Write([]byte("temporary content"))
	if err != nil {
		return err
	}
	err = tempFile.Close()
	if err != nil {
		return err
	}

	return os.Rename(tempFile.Name(), newname)
}
func main() {
	// rename "input.txt" into "output.txt" in the current working directory
	err := rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	// rename "docs" into "mydocs" in the current working directory
	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}

	// rename "/input.txt" into "/output.txt" in the filesystem root
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	// rename "/docs" into "/mydocs" in the filesystem root
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}
}
