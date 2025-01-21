The error `undefined: filepath.CreateDirAll` occurs because, according to Go's standard library `filepath`, you need to import it before you can use its functions.
The error `cannot use os.Args[1:] (value of type []string) as string value in argument to filepath.Join` occurs because Go's standard library does not directly support passing multiple arguments to the `filepath.Join` function, so you need to call it with all your arguments separately. This is how you should rewrite your original code:
```go
import (
	"filepath"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Printf("usage: mkdir <directory>\n")
		return
	}

	// Using the built-in 'filepath' package, to create directories if they don't exist
	_, err := filepath.CreateDirAll(os.Args[1])
	if err != nil {
		fmt.Printf("couldn't create directory: %s\n", err)
		return
	}
	// If the CreateDirAll call was successful, then we know that directories have been successfully created
	fmt.Printf("created directories successfully\n")
}
```
