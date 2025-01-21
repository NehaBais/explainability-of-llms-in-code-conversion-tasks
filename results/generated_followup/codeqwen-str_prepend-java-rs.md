Error: expected item, found keyword `let`

Fix: You need to add a semicolon after the first line of the code to end the statement and then declare the variable `string`.

Corrected Rust code:

```rs
fn main() {
    let mut string = String::from("def");
    string = format!("abc{}", string);
}
```
