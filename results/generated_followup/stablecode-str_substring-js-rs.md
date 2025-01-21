The error is caused by an unclosed delimiter at the end of the function body, and an unexpected closing delimiter for the `println!` macro call. The fix involves adding a closing delimiter for the `println!` macro call, which was missing in the original code. Then rewrite the corrected code as follows:
```rust
fn main() {
    let str = String::from("abcdefgh");
    let n = 2;
    let m = 3;

    // * starting from n characters in, up to the end of the string;
    println!("{}", str.substring(n))); // => "cdefgh"
    println!(
        "{}",
        str.substring(0, str.len() - 1))));  // =====> "abcdefg"

    // * whole string minus last character;
    println!("{}", str.substring(0, str.len() - 1))));  // =====> "abcdefg"

    // * starting from a known character within the string and of m length;
    let index = str.find('b').unwrap(); // find 'b' and return its position (index), unwrap will fail if character is not present in the string
    println!("{}", str.substring(index, m))));  // =====> "bcd"

    // * starting from a known substring within the string and of m length;
    let index = str.find('bc').unwrap(); // find 'bc' and return its position (index), unwrap will fail if character is not present in the string
    println!("{}", str.substring(index, m))));  // =====> "bcd"
}
```
