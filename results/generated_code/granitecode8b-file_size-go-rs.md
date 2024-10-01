Here's the converted code from Golang to Rust:
```
fn print_file_size(f: &str) {
    if let Ok(stat) = std::fs::metadata(f) {
        println!("{}", stat.size());
    } else {
        eprintln!("Error getting file size");
    }
}
fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
This code uses the `std::fs::metadata` function to get information about a file, including its size. The `stat.size()` method returns the size of the file in bytes. If there is an error getting the file size, the `print_file_size` function prints an error message using the `eprintln!` macro.

