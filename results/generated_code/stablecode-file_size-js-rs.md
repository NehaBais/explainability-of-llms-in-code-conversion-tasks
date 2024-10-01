Rust doesn't have built-in support for file manipulation activities like this JavaScript code does. However, you can use the `std::fs` module to interact with the filesystem in Rust. 

Please note that Rust's standard library doesn't include a cross platform function to get the size of a file, because it varies between platforms (e.g., Windows vs Linux). This is done on purpose by the Rust developers as per their design principles to ensure consistency across different platforms.

If you need this functionality, you may consider using a crate such as `dirs` or `std::fs`. 

Here's an example of how you might use the `std::fs` module to get the size of a file:
```rust
use std::fs;

let metadata = fs::metadata("input.txt")?;
println!("Size of input.txt is {}", metadata.len());
```
This code first uses the `fs::metadata` function to retrieve some metadata about the file named "input.txt". This includes the size of the file, which can be accessed using the `len()` method on the `metadata` object. The result of this operation is then printed to the console.
