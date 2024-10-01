The following is the equivalent Rust code for the Golang program above. Please note that Rust's string handling functions are a bit more explicit than Golang due to the ownership and borrowing rules in Rust:

```rust
fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // starting from n characters in and of m length
    println!("Start {}, length {}:   {}", n, m, &s[n..=n+m-1]);

    // starting from n characters in, up to the end of the string
    println!("Start {}, to end:     {}", n, &s[n..]);

    // whole string minus last character
    println!("All but last:        {}", &s[0..s.len()-1]);

    if let Some(dx) = s.find('D') {
        // starting from a known character within the string and of m length
        println!("Start 'D', length {}:  {}", m, &s[dx..=dx+m-1]);
    }

    if let Some(sx) = s.find("DE") {
        // starting from a known substring within the string and of m length
        println!("Start \"DE\", length {}:{}", m, &s[sx..=sx+m-1]);
    }
}
```
This Rust version assumes UTF8 by default which complies with your requirement. The `find` method returns an Option so we use if let to unwrap it without panicking on a None value. 

Please note that the behavior is slightly different from Go's substring methods, due to the difference in how Rust and Go handle strings, their respective memory safety guarantees (ownership/borrowing) and the fact that Rust's `slice` does not account for UTF-8 multi-byte characters while maintaining the same indices as Go. 

As a result, some methods might not behave exactly like in Golang when the string includes multi-byte Unicode characters.
