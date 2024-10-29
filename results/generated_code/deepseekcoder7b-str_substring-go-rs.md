The Rust language does not have a built-in support for UTF-8 or UTF-16 strings. Therefore, when working with Unicode in Rust, we need to use the 'unicode-segmentation' crate which provides algorithms that can work on both BMP (Basic Multilingual Plane) and non-BMP code points. Here is the conversion of your Golang program into a Rust equivalent:

```rust
use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;
    
    // for reference
    println!("Index:  {}", "01234567");
    println!("String: {}", s);
  
    let segments = s.graphemes(true);
      
    // starting from n characters in and of m length
    let start_n = segments.skip(n).take(m).collect::<Vec<&str>>(); 
    println!("Start {}, length {}: {}", n, m, if let Some((_, end)) = start_n.iter().next() { &s[..*end] });
    
    // starting from n characters in, up to the end of the string
    println!("Start {}, to end: {}", n, s.get(n..).unwrap_or(""));
      
    // whole string minus last character
    if let Some((_, &end)) = segments.next().zip(s.graphemes(false).last()) { 
        println!("All but last: {}", &s[..end]);
    }
    
    // starting from a known character within the string and of m length
    let dx = match s.find('D') { Some(v) => v, None => 0};
    println!("Start 'D', length {}: {}", m, if dx + m < s.len() { &s[dx..dx+m] } else { ""});
    
    // starting from a known substring within the string and of m length
    let sx = match s.find("DE") { Some(v) => v, None => 0};
    println!("Start \"DE\", length {}: {}", m, if sx + m < s.len() { &s[sx..sx+m] } else { ""});
} 
```
Note: This program requires the unicode-segmentation crate which can be added to your project by including it in your Cargo.toml dependencies like so `unicode-segmentation = "1.8.0"`.

