Error: The code requires type annotations for `docs_dir`.
Fix: Add `let docs_dir: PathBuf = env::var("HOME").unwrap().into();` to specify the type of `docs_dir`.
Rewritten code:
```rs
use std::env;
use std::fs;
use std::path::Path;
fn main() {
    let cwd = env::current_dir().unwrap();
    println!("Current working directory");
    print_stat(cwd.join("input.txt"));
    print_stat(Path::new("/input.txt"));

    let docs_dir = env::var("HOME").unwrap().into();
    docs_dir.push("docs");
    println!("User's home directory");
    print_stat(docs_dir);

    fn print_stat<P: AsRef<Path>>(path: P) {
        match fs::metadata(path) {
            Ok(meta) => {
                if meta.is_dir() {
                    println!("{} is a directory", path.as_ref().display());
                } else {
                    println!("{} is a file", path.as_ref().display());
                }
            }
            Err(e) => eprintln!("Error: {}", e),
        }
    }
}
```

