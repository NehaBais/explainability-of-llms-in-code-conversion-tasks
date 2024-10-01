```go
import (
	"os"
)

func checkErr(err error) {
	if err != nil {
		panic(err)
	}
}

func main() {
	// Create an empty file in the current working directory
	err := os.Create("output.txt")
	checkErr(err)

	// Create an empty file in the filesystem root
	err = os.Create("/output.txt")
	checkErr(err)

	// Create an empty directory in the current working directory
	err = os.Mkdir("docs", 0755)
	checkErr(err)

	// Create an empty directory in the filesystem root
	err = os.Mkdir("/docs", 0755)
	checkErr(err)
}
```

