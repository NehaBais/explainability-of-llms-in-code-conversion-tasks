The equivalent Go code would look like this:

```go
package main

import (
	"fmt"
	"os/exec"
)

func check(dir string, expected bool) error {
	cmd := exec.Command("dir", dir)
	output, err := cmd.Output()
	if err != nil {
		return err
	}
	var fileExists bool
	for _, line := range strings.Split(string(output), "\n") {
		if strings.Contains(line, "File(s)") || strings.Contains(line, "Directory(s)") {
			fileExists = true
			break
		}
	}
	if fileExists != expected {
		return fmt.Errorf("Expected %v to exist at %s but it does not", expected, dir)
	}

	return nil
}

func main() {
	fmt.Println(check(".", true))
	fmt.Println(check("c:/", true))
	fmt.Println(check("docs", true))
	fmt.Println(check("c:/docs", true))
}
```

Note: This program uses the `os/exec` package to execute Windows command prompt commands (here, `dir`). In Unix-like systems, you can use `ls -l` instead.
Also, this code does not catch errors from the command execution process. You would need a more robust error handling mechanism depending on your needs.
