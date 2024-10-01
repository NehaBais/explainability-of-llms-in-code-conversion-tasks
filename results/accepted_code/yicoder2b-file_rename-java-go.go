package main
import (
  "os"
)
func renameFile(oldname string, newname string) bool {
    return os.Rename(oldname, newname)
}
func test(type string, oldname string, newname string) {
    success := renameFile(oldname, newname)
    fmt.Printf("The following %s called %s%s\n", type, oldname, (!success) && os.IsNotExist(os.Err) ? " was not found" : " was renamed as "+newname+(!success ? "" : "."))
}
func main() {
    test("file", "input.txt", "output.txt")
    test("file", "docs/", "mydocs/")
}