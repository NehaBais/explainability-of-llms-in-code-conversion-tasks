Rust Code - 
```
use std::path::PathBuf;

fn main() {
    let mut path1 = PathBuf::from(".");
    path1.push("docs");
    path1.push("input.txt");
    println!("{}", std::fs::metadata(&path1).is_ok());
    // use push_str to append string literal
    let mut path2 = PathBuf::from("/");
    path2.push("docs");
    path2.push("input.txt");
    println!("{}", std::fs::metadata(&path2).is_ok());
}
```
