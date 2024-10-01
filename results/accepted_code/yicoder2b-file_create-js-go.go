package main

import (
	"os"
)

func main() {
	err := createFileAndDir("output.txt", 0)
	if err != nil {
		printErr(err)
	}
	err = createFileAndDir("/output.txt", 0)
	if err != nil {
		printErr(err)
	}
	err = createFileAndDir("docs", 0)
	if err != nil {
		printErr(err)
	}
	err = createFileAndDir("/docs", 0)
	if err != nil {
		printErr(err)
	}
}

func createFileAndDir(fileName string, size int64) (err error) {
	fileInfo, _ := os.GetFile(fileName)
	if fileInfo == nil {
		return createDir(fileName, size)
	} else {
		// check the size and if required resize it
		_, err = os.Stat(fileName)
		if err != nil {
			return err
		}
	}
	return nil
}

func createDir(dirName string, size int64) (err error) {
	fileInfo, _ := os.GetFile(dirName)
	if fileInfo == nil {
		return os.Mkdir(dirName, 0755) // 0755 means permissions for user/group/other will be 755
	} else {
		// check the size and if required resize it
		_, err = os.Stat(dirName)
		if err != nil {
			return err
		}
	}
	return nil
}
func printErr(err error) {
	if err != nil {
		printErrln("An error occurred:", err)
	}
}
