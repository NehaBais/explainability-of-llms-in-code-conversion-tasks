This code will print the string "Mary had a little lamb" to the console.

Here is the Rust equivalent of this C code:

```
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```
In this Rust code, we first define a variable `extra` and assign it the value `"little"`. Then, we use the `println!` macro to print the string "Mary had a little lamb." to the console. The `{}` in the format string is replaced by the value of the `extra` variable.
