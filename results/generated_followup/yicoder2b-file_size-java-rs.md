Sure, let's convert this Java code to Rust. I will suggest a way to handle files, but we need to consider that Rust does not have built-in methods for reading or writing the entire file at once like in Java.

```rs
use std::fs::File;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let file_a = File::open("file.txt")?;
    let mut size_a = 0;
    for _ in file_a.bytes() {
        size_a += 1;
    }

    let file_b = File::open("/home/user/file.txt")?;
    let mut size_b = 0;
    for _ in file_b.bytes() {
        size_b += 1;
    }
    println!("The size of the first file is {} bytes", size_a);
    println!("The size of the second file is {} bytes", size_b);

    Ok(())
}
```
Explanation:
In Rust, we can use the `File` type to read from a file. We iterate over each byte in the file using the `bytes()` method and add 1 for each operation we perform with each line of the file. Note that reading the entire file into memory may not be suitable if your file is very large. Instead, you can process the file line by line or use a custom iterator to read the file one byte at a time. The `?` operator before `open()` allows it to return a Result type which indicates whether the operation was successful or an error. If there's any error, the program will panic and stop execution.

Also notice that we are using the `Result` type from the standard library, which can represent two possible results: either success (a value of the correct type) or failure (an `Error` instance). We use it here to handle errors gracefully and return them with a `-1` error code. If there were more error types, you would add their error instances as error values in the error tuple.
