The error can be summarized as "expected one of `,` ,` .`, `?`, or an operator, found `"yes"`." 

To fix this error, we need to remove unnecessary import statements that are causing the warnings and errors. 

Here's the corrected code in a single fenced code block:

```rust
fn check_reg(path: &str) -> bool {
    let path = std::path::Path::new(path);
    path.is_file()
}

fn check_dir(path: &str) -> bool {
    let path = std::path::Path::new(path);
    path.is_dir()
}

fn main() {
    println!("input.txt is a regular file? {}", 
                     check_reg("input.txt") ? "yes" : "no");

    println!("docs is a directory? {}",
                    check_dir("docs") ? "yes" : "no");

    println!("/input.txt is a regular file? {}",
                   check_reg("/input.txt") ? "yes" : "no");

    println!("/docs is a directory? {}",
                   check_dir("/docs") ? "yes" : "no");
}
```

This code checks if a file and a directory exist at specific locations and prints the corresponding result in the console.
