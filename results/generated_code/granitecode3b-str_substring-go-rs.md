Here's the converted code in Rust:
```
fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;
    // for reference
    println!("Index: {}", "01234567");
    println!("String: {}", s);
    // starting from n characters in and of m length
    println!("Start {} , length {}: {}", n, m, s[n..(n+m)]);
    // starting from n characters in, up to the end of the string
    println!("Start {} , to end: {}", n, s[(n..).into_iter().take(s.len()).collect::<String>()]);
    // whole string minus last character
    println!("All but last: {}", s[..s.len()-1].to_string());
    // starting from a known character within the string and of m length
    let dx = s.find('D').unwrap();
    println!("Start 'D', length {}: {}", m, s[(dx..(dx+m)).into_iter().take(s.len()).collect::<String>()]);
    // starting from a known substring within the string and of m length
    let sx = s.find("DE").unwrap();
    println!("Start \"DE\", length {}: {}", m, s[(sx..(sx+m)).into_iter().take(s.len()).collect::<String>());
}
``` 
Note that in Rust, strings are immutable by default, so we can't use the ` '..' ` syntax to slice a string. Instead, we use the `find` method to find the index of a character or substring, and then use that index to slice the string. Also, note that we use the `unwrap` method to handle the case where the substring or character is not found in the string.

