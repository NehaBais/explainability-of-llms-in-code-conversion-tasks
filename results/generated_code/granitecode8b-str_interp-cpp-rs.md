Here's the Rust code that implements string interpolation using the `str::replace` method:
```
fn main() {
 let original = "Mary had a X lamb.";
 let to_be_replaced = "X";
 let replacement = "little";
 let new_string = original.replace(to_be_replaced, replacement);
 println!("String after replacement: {}", new_string);
}
```
This code defines three strings: `original`, `to_be_replaced`, and `replacement`. The `str::replace` method is then used to replace all occurrences of `to_be_replaced` in `original` with `replacement`, resulting in the string `"Mary had a little lamb."`. Finally, this new string is printed to the console using the `println!` macro.

