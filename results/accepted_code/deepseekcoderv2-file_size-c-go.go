package main

import (
	"fmt"
	"os/exec"
)

func main() {
	// Verify the size of a file called input.txt for a file in the current working directory, and another one in the file system root
	cmd1 := exec.Command("stat", "-c", "%s", "./input.txt")
	output1, err := cmd1.Output()
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%s\n", string(output1))

	cmd2 := exec.Command("stat", "-c", "%s", "/input.txt")
	output2, err := cmd2.Output()
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%s\n", string(output2))
}
