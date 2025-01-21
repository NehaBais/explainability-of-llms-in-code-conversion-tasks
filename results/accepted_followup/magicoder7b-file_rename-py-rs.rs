use std::fs;

// Current working directory.
let _ = fs::rename("input.txt", "output.txt").unwrap();
let _ = fs::rename("docs", "mydocs").unwrap();

// Filesystem root.
let _ = fs::rename("/input.txt", "/output.txt").unwrap();
let _ = fs::rename("/docs", "/mydocs").unwrap();