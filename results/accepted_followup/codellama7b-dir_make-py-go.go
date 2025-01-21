package main

import (
	"os"
)

func mkdirp(path string) error {
	if err := os.MkdirAll(path, os.ModePerm); err != nil {
		return err
	}
	return nil
}
