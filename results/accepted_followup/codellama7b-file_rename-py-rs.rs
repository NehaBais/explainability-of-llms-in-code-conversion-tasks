use std::{fs};

// rename input.txt to output.txt in the current working directory
fs::rename(std::path::Path::new("input.txt"), std::path::Path::new("output.txt")).unwrap();

// rename docs to mydocs in the current working directory
fs::rename(std::path::Path::new("docs"), std::path::Path::new("mydocs")).unwrap();

// rename input.txt to output.txt in the filesystem root
fs::rename(std::path::Path::new("/input.txt"), std::path::Path::new("/output.txt")).unwrap();

// rename docs to mydocs in the filesystem root
fs::rename(std::path::Path::new("/docs"), std::path::Path::new("/mydocs")).unwrap();