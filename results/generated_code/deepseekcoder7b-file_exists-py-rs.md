Rust doesn't have a built-in equivalent of the os library in Python, but it does provide File and Path modules for such operations. 

However, please note that Rust does not support checking if directory exists with a single method like python, we need to use Path module instead. Also paths in Rust are Unix style ("/" as separator) while Windows follows different convention ("\\" or "/").
```Rust
use std::fs;
use std::path::{Path, PathBuf};

fn check_file_exists(filename: &str) -> bool {
    let path = Path::new(filename);
    match path.exists() && path.is_file() {
        true => true, 
        false => false,
    }
}

fn check_directory_exists(dirname: &str) -> bool {
    let path = Path::new(dirname);
    match path.exists() && path.is_dir() {
        true => true, 
        false => false,
    }
}

// for current working directory  
assert!(check_file_exists("input.txt"));
assert!(check_directory_exists("docs"));

// for file and a directory in the filesystem root ("/" as Unix convention)
assert!(check_file_exists("/input.txt"));
assert!(check_directory_exists("/docs"));  // Rust does not support checking if "/docs" exists, you would need to provide an absolute path.
```

Please be aware that the script will only run successfully when files/directories are present in your working directory and they have read permissions for the user running it. It won't work on restricted filesystems (like root filesystem) unless you use `sudo` or equivalent command to give yourself required permissions. 
Also note, Windows does not support "/" path style as above in Rust and the code might need some adaptation if targeting Windows systems.

