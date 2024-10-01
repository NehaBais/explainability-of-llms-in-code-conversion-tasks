// JavaScript
var fso = new ActiveXObject("Scripting.FileSystemObject");
fso.GetFile('input.txt').Size;
fso.GetFile('c:/input.txt').Size;

```go
func main() {
	wd, _ := os.Getwd()
	fmt.Println(os.Getenv("PWD"))
	fso := NewFileSystemObject()

	if _, err := fso.GetFile("input.txt"); err == nil && !fso.IsDirectory("input.txt") {
		size, _ := fso.Size("input.txt")
		fmt.Println(size)
	}

	if _, err := fso.GetFile("/input.txt"); err == nil && !fso.IsDirectory("/input.txt") {
		size, _ := fso.Size("/input.txt")
		fmt.Println(size)
	}
}
```
