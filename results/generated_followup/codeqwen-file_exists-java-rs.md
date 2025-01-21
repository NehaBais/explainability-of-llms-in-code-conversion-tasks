Error: "dirs" crate is not imported

Fix: Add `extern crate dirs;` at the beginning of the code.

Rewritten corrected code:

```rs
extern crate dirs;
use std::fs;

fn main() {
    let mut current_directory = std::env::current_dir().unwrap();
    current_directory.push("docs");
    current_directory.push("input.txt");
    assert!(current_directory.exists());

    if let Some(mut root) = dirs::home_dir() {
        root.push("/docs");
        root.push("input.txt");
        assert!(root.exists());
    }
}
```
