
Here's the Rust equivalent of the Java code you provided:
```
use std::fs::File;

fn main() {
    let file_a = File::open("file.txt").unwrap();
    println!("{} bytes", file_a.metadata().len());
    let file_b = File::open("/file.txt").unwrap();
    println!("{} bytes", file_b.metadata().len());
}
```
The `std::fs::File` type is used to represent a file in the Rust programming language, and the `open()` method is used to open a file for reading or writing. The `metadata()` method of the file object returns an instance of the `Metadata` struct, which contains information about the file's size and other metadata.

Note that in Rust, we use the `println!` macro to print values to the console, rather than using `System.out.printf()` as in Java. Also, in Rust, we use the `/` operator to concatenate strings, rather than using a string literal with a backslash character.
