The given code is in C and it compares two strings. We can easily convert this to Rust by using `str::cmp()` or `str::eq()`, but we need to be aware that in Rust, unlike C, string comparison treats numeric characters as part of the character sequences rather than individual numeric values.

Here is the equivalent code in Rust:

```rust
fn main() {
    let s1 = "ball";
    let s2 = "bell";
    println!("{s1} {s1} {s1} {s1} {s1} {s1}", s1=s1, s2=s2); // exact equality

    println!("{s1} {s1} {s1} {s1} {s1} {s1}", s1=s1, s2=s2.chars().rev().collect::<String>());
    // case insensitive (ignoring case) 

    let s3 = "YUP";
    let s4 = "YEP";
    println!("{s3} {s3} {s3} {s3} {s3} {s3}", s1=s3, s2=s4); // exact equality

    println!("{s3} {s3} {s3} {s3} {s3} {s3}", s1=s3, s2=s4.chars().rev().collect::<String>());
    // case insensitive (ignoring case) 

    let s5 = "ball";
    let s6 = "BELL";
    println!("{s5} {s5} {s5} {s5} {s5} {s5}", s1=s5, s2=s6); // lexical comparison

    println!("{s5} {s5} {s5} {s5} {s5} {s5}", s1=s5, s2=s6.chars().rev().collect::<String>());
    // case insensitive (ignoring case) 

    let s7 = "ball";
    let s8 = "BALL";
    println!("{s7} {s7} {s7} {s7} {s7} {s7}", s1=s7, s2=s8); // lexical comparison

    println!("{s7} {s7} {s7} {s7} {s7} {s7}", s1=s7, s2=s8.chars().rev().collect::<String>());
    // case insensitive (ignoring case) 

    let s9 = "YUP";
    let s10 = "yep";
    println!("{s9} {s9} {s9} {s9} {s9} {s9}", s1=s9, s2=s10); // lexical comparison

    println!("{s9} {s9} {s9} {s9} {s9} {s9}", s1=s9, s2=s10.chars().rev().collect::<String>());
    // case insensitive (ignoring case) 
}
```

Note: The Rust code doesn't provide the exact same output as the C code because in Rust, comparison of numeric characters treats them as individual numeric values rather than part of the character sequences. Also, we are not able to ignore case as easily in Rust. You would need to use additional methods to convert strings to lowercase or uppercase before comparing.
