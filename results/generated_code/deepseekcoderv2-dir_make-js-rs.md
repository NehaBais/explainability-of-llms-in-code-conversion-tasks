 Sure! Below is the Rust implementation that mimics the behavior of the `mkdirp` function in JavaScript:

```rust
use std::fs;
use std::path::Path;

fn mkdirp(p: &str, cb: fn(std::io::Result<()>)) {
    let p = Path::new(p).canonicalize().unwrap();

    match fs::create_dir(&p) {
        Ok(_) => cb(Ok(())),
        Err(e) => {
            if e.kind() == std::io::ErrorKind::NotFound {
                // The directory doesn't exist. Make its parent and try again.
                let parent = p.parent().unwrap();
                mkdirp(&parent.to_string_lossy(), |result| {
                    match result {
                        Ok(_) => mkdirp(&p.to_string_lossy(), cb),
                        Err(e) => cb(Err(e)),
                    }
                });
            } else {
                // In the case of any other error, something is borked.
                cb(Err(e));
            }
        }
    }
}

fn main() {
    mkdirp("./path/to/dir", |result| {
        match result {
            Ok(_) => println!("Directory created successfully."),
            Err(e) => eprintln!("Error creating directory: {:?}", e),
        }
    });
}
```

### Explanation:
1. **Path Resolution**: The function `mkdirp` takes a path string and a callback function. It uses the standard library's `canonicalize` method to resolve the path, ensuring it is in canonical form.
2. **Directory Creation**: It attempts to create the directory using `fs::create_dir`. If successful, it calls the callback with `Ok(())`.
3. **Error Handling**: If there is an error and its kind is `NotFound`, it recursively creates the parent directories before attempting to create the target directory.
4. **Callback Execution**: The callback function provided by the user is called with either an `Ok` or an `Err` value, depending on whether the directory creation was successful or not.

### Usage:
The `main` function demonstrates how to use the `mkdirp` function with a sample path and callback.
