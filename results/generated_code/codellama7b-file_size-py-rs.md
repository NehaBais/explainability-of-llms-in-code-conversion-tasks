 Here is the Rust code that should accomplish the same thing:

```rust
use std::fs;

let size = fs::File::open("input.txt")?.metadata()?.len();
let size = fs::File::open("/input.txt")?.metadata()?.len();
```

Here, we use the `std::fs` module to interact with the file system, and the `File::open()` method to open a file. The `?` symbol at the end of the line indicates that the code should return an error if the file cannot be opened or read. If the file is successfully opened, we can get its size using the `metadata()` method and the `len()` method to retrieve the length of the file in bytes.

Note: In Rust, you need to specify the absolute path for a file located at the root of the file system. So, if you want to read from the `/input.txt` file, you need to provide its absolute path.

Also, note that this code will only work if the `input.txt` file exists in the current working directory or the root of the file system, respectively.
