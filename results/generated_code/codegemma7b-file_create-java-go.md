```go
import (
	"io/ioutil"
	"os"
)

func main() {
	// Here
	if err := ioutil.WriteFile("output.txt", []byte{}, 0644); err != nil {
		panic(err)
	}
	if err := os.Mkdir("docs", 0755); err != nil {
		panic(err)
	}

	// Root
	if err := ioutil.WriteFile(os.Getenv("HOME")+"/output.txt", []byte{}, 0644); err != nil {
		panic(err)
	}
	if err := os.Mkdir(os.Getenv("HOME")+"/docs", 0755); err != nil {
		panic(err)
	}
}
```
