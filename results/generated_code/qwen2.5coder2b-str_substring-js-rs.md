In Rust, we can use the `substr` method for getting substrings from a string. The `substr` method takes two arguments - the starting index and the number of characters to take.

Here is how you can convert the given JavaScript code into Rust:

```rust
fn main() {
    let str = "abcdefgh";

    let n = 2;
    let m = 3;

    //  *  starting from n characters in and of m length;
    println!("{}", str.substr(n, m));  // => "cde"

    //  * starting from n characters in, up to the end of the string;
    println!("{}", str.substr(n));  // => "cdefgh"
    println!("{}", str.substring(n));  // => "cdefgh"

    //  * whole string minus last character;
    println!("{}", str.substring(0, str.len() - 1));  // => "abcdefg"

    //  * starting from a known character within the string and of m length;
    let index_b = str.find('b').unwrap();
    println!("{}", str.substr(index_b, m));  // => "bcd"

    //  * starting from a known substring within the string and of m length. 
    let index_bc = str.find("bc").unwrap();
    println!("{}", str.substr(index_bc, m));  // => "bcd"
}
```

In this code, we use `str.len()` to get the length of the string, and `find` method to find the index of the character or substring in the string. The `unwrap` method is used to handle the case where the character or substring is not found, which will cause a compile-time error if uncommented.
