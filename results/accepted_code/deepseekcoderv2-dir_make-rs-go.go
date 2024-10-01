package main

import "os"

func mkdir(p string) (err error) {
	//check if path exists, or create it.
	if _, err = os.Stat(p); os.IsNotExist(err) {
		err = os.MkdirAll(p, 0755)
	}
	return err
}
func main() {
	mkdir("./path/to/dir")
}
