package main
import (
	"fmt"
	"os"
)
func renameFile(oldname, newname string) bool {
	// File (or directory) with old name
	file := oldname
	// File (or directory) with new name
	file2 := newname
	// Rename file (or directory)
	success := os.Rename(file, file2)
	return success
}
func test(type, oldname, newname string) {
	fmt.Println("The following", type, "called", oldname,
		"(", renameFile(oldname, newname), ") was renamed as ", newname, ".")
}
func main() {
	test("file", "input.txt", "output.txt")
	test("file", "/", "input.txt")
	test("directory", "docs", "mydocs")
	test("directory", "/", "docs")
}