In Rust, you can use the `substring` method on `&str`, which returns a new string that is part of the original string from the specified range. Here's how to implement it:

```rust
fn main() {
    let str = "abcdefgh";

    // Starting from n characters in and of m length;
    println!("{}", &str[2..5]); // =>  cde

    // Starting from n characters in, up to the end of the string;
    println!("{}", &str[2..]);   // =>  cdefgh
    println!("{}", str.substring(2));   // =>  cdefgh

    // Whole string minus last character;
    println!("{}", &str[..str.len() - 1]);   // =>  abcdefg

    // Starting from a known character within the string and of m length;
    let b_index = str.find('b').unwrap();   // find index of 'b' in the string
    println!("{}", &str[b_index..b_index + 3]);   // =>  bcd

    // Starting from a known substring within the string and of m length; 
    let bc_index = str.find("bc").unwrap();   // find index of "bc" in the string
    println!("{}", &str[bc_index..bc_index + 3]);   // =>  bcd
}
```

Note that Rust doesn't support the `substr` method, so it's not possible to use `str.substr(n, m)` or `str.substring(n)`. However, you can achieve similar functionality using a combination of string indexing and slicing. Also note that in UTF-8 or UTF-16, code points are considered valid characters for Unicode purposes, regardless of whether they are in the Basic Multilingual Plane or above it.
The `find` method is used to find the index of the character or substring within the string. If the index isn't found, it returns an `Option`, so you need to use `.unwrap()` to get the index value itself. The `substring` function is equivalent to slicing with a start and end index, which also works on `&str`.
