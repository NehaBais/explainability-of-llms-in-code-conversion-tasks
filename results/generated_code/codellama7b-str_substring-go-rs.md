This code converts a string to a substring of specified length and location in Go. It uses the `strings` library to perform operations on strings. Here is the Rust equivalent of this code:
```
use std::fmt;
use std::str;

fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // Starting from n characters in and of m length
    println!("Start {} length {}", &s[n..(n + m)], m);

    // Starting from n characters in, up to the end of the string
    println!("Start {}", &s[n..]);

    // Whole string minus last character
    println!("All but last", &s[0..len - 1]);

    // Starting from a known character within the string and of m length
    let dx = str.index_of(s, 'D');
    println!("Start 'D', length {}", &s[dx .. (dx + m)], m);

    // Starting from a known substring within the string and of m length
    let sx = str.find(s, "DE");
    println!("Start \"DE\", length {}", &s[sx .. (sx + m)], m);
}
```
In Rust, we use the `println!` macro to print to the console and the `std::str` module for string manipulation. The `index_of` function is used to find the index of a character in a string, and the `find` function is used to find a substring within a string. We also use the `len` function to get the length of a string.

Note that Rust has different syntax for string indexing than Go. In Rust, we use the `..` operator to specify the range of characters we want to include in our substring. Additionally, Rust's `println!` macro is more powerful and flexible than Go's `fmt.Printf` function, allowing us to print more complex data structures and expressions.
