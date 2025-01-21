In Rust, you can use the `chars()` method to handle Unicode strings and iterate over them. Here is a possible implementation for your code:

```rust
fn main() {
    let str = "abcdefgh";
    
    let n: usize = 2;
    let m: usize = 3;

    // * starting from n characters in and of m length
    let result1: String = str.chars().skip(n).take(m).collect();
    println!("{}", result1);  // => "cde"

    // * starting from n characters in, up to the end of the string
    let result2: String = str.chars().skip(n).collect();
    println!("{}", result2);  // => "cdefgh"

    // * whole string minus last character
    let result3: String = str.chars().take(str.len() - 1).collect();
    println!("{}", result3);  // => "abcdefg"

    // * starting from a known character within the string and of m length
    let idx_b = str.find('b').unwrap(); 
    let result4: String = str.chars().skip(idx_b).take(m).collect();
    println!("{}", result4);  // => "bcd"

    // * starting from a known substring within the string and of m length
    let idx_bc = str.find("bc").unwrap();
    let result5: String = str.chars().skip(idx_bc).take(m).collect();
    println!("{}", result5);  // => "bcd"
}
```

This program works with Unicode strings (as Rust natively supports UTF-8) and handles logical characters by iterating over them with the `chars()` method. The `unwrap()` function is used here because find() can return an Option which in this context will always be Some since we are sure that 'b' and "bc" will always exist within the string.

Please note that Rust does not have a built-in equivalent to JavaScript's `substring` or `substr` functions. Instead, it provides methods like `take`, `skip` to handle slicing of characters as needed.
