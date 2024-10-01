package main

import (
	"log"
)

func main() {
	// Rename a file called input.txt into output.txt and move it to the current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}
	// Rename a file called c:/input.txt into c:/output.txt and move it to the filesystem root
	err = os.Rename("c:/input.txt", "c:/output.txt")
	if err != nil {
		log.Fatal(err)
	}
	// Rename a directory called docs into mydocs and move it to the current working directory
	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}
	// Rename a directory called c:/docs into c:/mydocs and move it to the filesystem root
	err = os.Rename("c:/docs", "c:/mydocs")
	if err != nil {
		log.Fatal(err)
	}
}
