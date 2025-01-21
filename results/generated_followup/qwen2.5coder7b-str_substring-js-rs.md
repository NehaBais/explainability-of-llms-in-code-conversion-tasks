**Error Explanation:** The error is due to an invalid character `.` found in the crate name.

**Fix:** Remove the `.` from the crate name.

Here is the corrected code:

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
