package main

import (
	"fmt"
	"os/exec"
	"strings"
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
