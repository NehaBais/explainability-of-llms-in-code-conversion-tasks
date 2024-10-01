The equivalent code in Golang would be:

```Go
package main

import (
	"os"
)

func main() {
	Rename("input.txt", "output.txt", false)
	Rename("docs", "mydocs", true)
	Rename("/input.txt", "/output.txt", true)
	Rename("/docs", "/mydocs", true)
}

func Rename(oldname, newname string, isDir bool) {
	err := os.Rename(oldname, newname)
	if err != nil {
		panic(err)
	}

	if isDir {
		newdir, _ := os.Stat(newname)
		info, _ := os.Stat(oldname)
		if (newdir.IsDir() && info.Mode()&os.ModeDir != 0) {
			Rename(oldname+"/*", newname+"/", true) // recursive rename all items inside the directory
		}
	}
}
```
