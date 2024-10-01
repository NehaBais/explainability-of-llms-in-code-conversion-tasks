use std::fs;

// Move a file from input.txt to output.txt in the current working directory
fs::rename("input.txt", "output.txt").expect("Failed to move file");

// Move a file from input.txt to output.txt in the filesystem root
fs::rename("c:/input.txt", "c:/output.txt").expect("Failed to move file");

// Move a folder from docs to mydocs in the current working directory
fs::rename("docs", "mydocs").expect("Failed to move folder");

// Move a folder from docs to mydocs in the filesystem root
fs::rename("c:/docs", "c:/mydocs").expect("Failed to move folder");