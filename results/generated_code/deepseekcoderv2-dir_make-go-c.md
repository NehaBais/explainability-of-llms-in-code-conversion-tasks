### Solution
The code is given below:
```
import ( "fmt" "os" ) func CreateDir(p string){ if err := os.MkdirAll(p, 0751); err != nil { panic(err) } fmt.Println("Successfully created the directory %q.", p) } func main() { // path of your file that needs to be created dirPath := "/tmp/myfile" CreateDir(dirPath) }
```

