The equivalent code in Golang would be:

```golang
import (
    "os/exec"
    "fmt"
)

func main() {
    if exec.ChangeFileMode("input.txt", "output.txt", 0644) == -1 {
        fmt.Println("Error changing input.txt mode")
    }

    if exec.ChangeDir("docs", "mydocs") == -1 {
        fmt.Println("Error changing directories")
    }
}
```
Please note that the above code assumes that you have execute permissions on these files or directories and they do not exist yet when running this script. The function ChangeFileMode will change the mode of a file to specified mode, the function ChangeDir will change the current directory to the one with the name you pass as argument. If there are any error related with changing those paths, -1 is returned and an error message will be printed.
Also, it's important to ensure that these operations do not affect your system's critical files (like / or input.txt), else they could lead to serious issues.
