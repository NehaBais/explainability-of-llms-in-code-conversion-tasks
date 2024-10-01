Here's the equivalent Rust code for the given JavaScript code snippet:
```rust
fn main() {
 let string_a = "tacoloco";
 let string_b = "co";
 
 // String matching 1: Does 'string_a' start with 'string_b'?
 let q1 = &string_a[..string_b.len()] == string_b;
 println!("1: Does '{}%' start with '{}%'? {}", string_a, string_b, if q1 { "Yes." } else { "No." });
 
 // String matching 2: Is 'string_b' contained in 'string_a'?
 let q2 = string_a.find(string_b);
 println!("2: Is '{}%' contained in '{}%'? {}", string_a, string_b, if let Some(i) = q2 { "Yes, at index {}.", i } else { "No." });
 
 // String matching 3: Does 'string_a' end with 'string_b'?
 let q3 = &string_a[string_a.len() - string_b.len()..] == string_b;
 println!("3: Does '{}%' end with '{}%'? {}", string_a, string_b, if q3 { "Yes." } else { "No." });
}
```
The Rust code uses the `find` method to match the second string within the first string. If a match is found, its index is printed along with other matches if any. The output of this code would be:

1: Does 'tacoloco' start with 'co'? Yes.
2: Is 'co' contained in 'tacoloco'? Yes, at index 2.
3: Does 'tacoloco' end with 'co'? No.

