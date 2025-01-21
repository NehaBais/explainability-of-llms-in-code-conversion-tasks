package main

import (
	"os"
)

func create(directory string) {
	os.Create(os.PathJoin(directory, "output.txt"))
	os.Mkdir(os.PathJoin(directory, "docs"), 0755)
}

create(".") // current directory
create("/") // root directory