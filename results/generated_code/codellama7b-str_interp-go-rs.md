In Rust, you can use the `format!` macro to achieve string interpolation. Here's an example of how you could implement the above code in Rust:
```
fn main() {
    let str = "Mary had a {} lamb";
    let txt = "little";
    let out = format!("{}", str, txt);
    println!("{}", out);
}
```
Note that the `format!` macro takes a string with placeholders and replaces them with values passed as arguments. In this case, we pass `str` and `txt` as arguments to the macro, which will replace the `{}` placeholder in the string with their respective values. The resulting string is then printed using the `println!` macro.
