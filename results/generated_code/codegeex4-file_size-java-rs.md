```rust
use std::fs;

fn main() {
    let mut path = "./input.txt";
    let size_a = fs::metadata(path).unwrap().len();
    println!("{:,} B", size_a);

    path = "/input.txt";
    let size_b = fs::metadata(path).unwrap().len();
    println!("{:,} B", size_b);
}
```

Note that this code will panic if the file doesn't exist or cannot be read. If you want to handle these cases more gracefully, you should check the `Result` type returned by `fs::metadata`.
