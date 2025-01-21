package main

import "os"

func mkdirp(path string) error {
	return os.MkdirAll(path, os.ModePerm)
}
