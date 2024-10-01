package main

import (
	"fmt"
	"os"
)

func renameFile(oldname, newname string) bool {
	err := os.Rename(oldname, newname)
	return err == nil
}
func test(typ, oldname, newname string) {
	fmt.Printf("The following %s called %s%s was renamed as %s%s.%sn",
		typ, oldname,
		string([]rune{os.PathSeparator}),
		newname,
		string([]rune{os.PathSeparator}),
		" was successfully renamed.",
	)
}
func main() {
	test("file", "input.txt", "output.txt")
	test("file", string([]rune{os.PathSeparator})+"input.txt", string([]rune{os.PathSeparator})+"output.txt")
	test("directory", "docs", "mydocs")
	test("directory", string([]rune{os.PathSeparator})+"docs"+string([]rune{os.PathSeparator}), string([]rune{os.PathSeparator})+"mydocs"+string([]rune{os.PathSeparator}))
}
