package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func CreateDirIfNotExists(dir string) error {
	splits := filepath.Split(dir, '/')
	var parent string
	for _, s := range splits[:len(splits)-1] { // last element is the directory itself in case it's missing its own parent
		parent = filepath.Join(parent, s)
		_, err := os.Stat(parent) // Stat returns error if dir does not exist
		if err != nil && !os.IsNotExist(err) {
			return fmt.Errorf("couldn't create directory %s: %v", parent, err)
		}
		if err == nil { // If the directory exists already, just move on to next parent
			continue
		}
		_, err = os.Mkdir(parent, 0755) // Default perms, change to fit your needs
		if err != nil {
			return fmt.Errorf("couldn't create directory %s: %v", parent, err)
		}
	}
	return nil
}
