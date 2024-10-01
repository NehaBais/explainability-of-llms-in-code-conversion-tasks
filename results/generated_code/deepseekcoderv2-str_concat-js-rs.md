### Solution

```rust
let mut s: String;
println!("Enter a string:");
if let Ok(input_string) = read_line() {
    s = input_string;
} else {
    panic!("Invalid input");
}
println!("Original String: {}", s);
let new_s = format!("{}{}", s, " there!");
println!("Modified String: {}", new_s);
```
