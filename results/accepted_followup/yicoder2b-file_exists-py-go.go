package main

import (
	"os"
	"path/filepath"
)

func main() {
	if file, err := os.Open("input.txt"); err == nil {
		println("File input.txt exists")
	} else {
		switch err {
		case errNotFound:
			println("File input.txt does not exist")
		default:
			println(err) // print other errors for clarity
		}
	}
	if file, err := os.Open("/input.txt"); err == nil {
		println("Absolute path to input.txt exists")
	} else {
		switch err {
		case errNotFound:
			println("Absolute path /input.txt does not exist")
		default:
			println(err) // print other errors for clarity
		}
	}
	if _, err := os.Stat("docs"); err == nil {
		println("Directory docs exists")
	} else {
		switch err {
		case errNotFound:
			println("Directory docs does not exist")
		default:
			println(err) // print other errors for clarity
		}
	}
	if _, err := os.Stat("/docs"); err == nil {
		println("Absolute path to docs exists")
	} else {
		switch err {
		case errNotFound:
			println("Absolute path /docs does not exist")
		default:
			println(err) // print other errors for clarity
		}
	}
}
