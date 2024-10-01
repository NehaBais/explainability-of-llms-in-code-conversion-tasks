Here's the Rust code that meets the requirements you specified:
```
fn main() {
 let s = "0123456789";
 let n = 3;
 let m = 4;
 let c = '2';
 let sub = "456";

 println!("{}", s.chars().skip(n).take(m).collect::<String>());
 println!("{}", s.chars().skip(n).collect::<String>());
 println!("{}", s.chars().rev().skip(1).collect::<String>());
 println!("{}", s.match_indices(c).nth(0).map(|(i, _)| s.chars().skip(i + 1).take(m).collect::<String>()).unwrap_or("".to_string()));
 println!("{}", s.match_indices(sub).nth(0).map(|(i, _)| s.chars().skip(i).take(m).collect::<String>()).unwrap_or("".to_string()));
}
```
This code uses the `chars()` method to iterate over the string's characters instead of its bytes, which is required for handling Unicode characters correctly. The `skip()` and `take()` methods are used to extract substrings based on the specified start index and length. The `rev()` method is used to reverse the string and then use `skip(1)` to remove the last character. The `find()` method is used to find the index of a specific character or substring within the string, and then `skip()` and `take()` are used to extract the desired substring from that point.
Note that this code uses UTF-8 encoding by default, so it can handle any valid Unicode code point in the Basic Multilingual Plane or above. If you need to support other encodings, you can use the `encoding` crate to specify the encoding explicitly.

