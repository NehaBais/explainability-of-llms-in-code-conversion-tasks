```rust
use std::fs::{self, DirBuilder};
use std::path::Path;

fn main() {
    let paths = vec![
        Path::new("output.txt"),
        Path::new("/output.txt"),
        Path::new("docs"),
        Path::new("/docs"),
    ];

    for path in &paths {
        match fs::File::create(path) {
            Ok(_) => (),
            Err(e) => eprintln!("{}", e),
        }
        let dir_builder = DirBuilder::new();
        match dir_builder.create(&path) {
            Ok(_) => (),
            Err(e) if e.kind() == std::io::ErrorKind::AlreadyExists => (),
            Err(e) => eprintln!("{}", e),
        };
    }
}
```
