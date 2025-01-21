use std::fs;

fs::rename("input.txt", "output.txt").expect("Failed to move file");
fs::rename("c:/input.txt", "c:/output.txt").expect("Failed to move file");
fs::rename("docs", "mydocs").expect("Failed to move folder");
fs::rename("c:/docs", "c:/mydocs").expect("Failed to move folder");