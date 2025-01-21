use std::fs;
use std::path::Path;

// For current working directory
let cwd = std::env::current_dir();
assert!(cwd.is_ok());

let input_txt_cwd = cwd.and_then(|d| d.join("input.txt")));
assert!(input_txt_cwd.is_ok());

let docs_cwd = cwd.and_then(|d| d.join("docs")));
assert!(docs_cwd.is_ok());

// For file and directory in the filesystem root
let root = std::env::root_dir();
assert!(root.is_ok());

let input_txt_root = root.and_then(|d| d.join("input.txt")));
assert!(input_txt_root.is_ok());

let docs_root = root.and_then(|d| d.join("docs")));
assert!(docs_root.is_ok());