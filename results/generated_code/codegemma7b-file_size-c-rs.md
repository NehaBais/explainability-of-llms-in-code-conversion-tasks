```rust
use std::fs;
use std::path::Path;

fn main() {
    let input_file_path = Path::new("input.txt");
    let input_file_size = fs::metadata(input_file_path).unwrap().len();
    println!("{}", input_file_size);

    let root_file_path = Path::new("/input.txt");
    let root_file_size = fs::metadata(root_file_path).unwrap().len();
    println!("{}", root_file_size);
}
```
