Here's the Rust code that does the same thing as the Golang code you provided:
```
fn main() {
 let str = "Mary had a {} lamb";
 let txt = "little";
 let out = format!(str, txt);
 println!("{}", out);
}
```
In Rust, we use the `format!` macro to perform string interpolation. The `{}` in the string is a placeholder for a value that will be inserted at runtime. We pass the value we want to insert into the placeholder using the comma operator `,`. In this case, we pass `txt` as the value to insert into the placeholder.

