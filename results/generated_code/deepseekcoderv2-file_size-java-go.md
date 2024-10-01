```
import (
	"fmt"
	"os"
)

func main() {
	file := "input.txt"
	// check if the size of a file called input.txt in current working directory and another one in the root file system using os package 
	_, err1 := os.Stat(file)
	if err1 != nil {
		fmt.Printf("%s does not exist\n", file)
	} else {
		fileInfo, _ := os.Stat(file)
		fmt.Println("Size of ", file, " is ", fileInfo.Size(), " bytes")
	}
	// check if the size of a file called input.txt in current working directory and another one in the root file system using ioutil package 
	_, err2 := os.Stat(file)
	if err2 != nil {
		fmt.Printf("%s does not exist\n", file)
	} else {
		fileInfo, _ := os.Stat(file)
		fmt.Println("Size of ", file, " is ", fileInfo.Size(), " bytes")
	}
}
```
