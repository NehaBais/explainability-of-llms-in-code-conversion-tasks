```rust
use std::path::{Path, PathBuf};

fn verify_files_and_dirs() {
    let pwd = env::current_dir().expect("Failed to get current directory");
    let root_path = Path::new("/");
    
    // Check for input.txt in the current working directory
    check_file(&pwd.join("input.txt"));
    check_file(&PathBuf::from("/input.txt"));
    
    // Check for docs in the current working directory
    check_dir(&pwd.join("docs"));
    check_dir(&PathBuf::from("/docs"));
}

fn check_file(path: &Path) {
    if path.is_file() {
        println!("File exists at {}", path.display());
    } else {
        println!("File does not exist at {}", path.display());
    }
}

fn check_dir(path: &Path) {
    if path.is_dir() {
        println!("Directory exists at {}", path.display());
    } else {
        println!("Directory does not exist at {}", path.display());
    }
}
```
