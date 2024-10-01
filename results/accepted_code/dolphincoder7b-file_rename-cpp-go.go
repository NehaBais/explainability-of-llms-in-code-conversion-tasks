package main

import (
	"os"
)

func rename(oldname string, newname string) error {
	srcfile, err := os.Open(oldname)
	if err != nil {
		return err
	}
	defer srcfile.Close()

	dstfile, err := os.Create(newname)
	if err != nil {
		return err
	}
	defer dstfile.Close()

	_, err = io.Copy(dstfile, srcfile)
	if err != nil {
		return err
	}

	return srcfile.Truncate(0)
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
