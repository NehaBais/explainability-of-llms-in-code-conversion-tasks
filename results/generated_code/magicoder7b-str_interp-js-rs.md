 In Rust, you can use the `replace` method in combination with the format macro to achieve similar results as shown below:

```rust
let original: &str = "Mary had a X lamb";
let little: &str = "little";

let replaced = format!("{}", original.replace("X", little));

println!("{}", replaced); // Outputs: Mary had a little lamb
```

Here, `format!` macro is used to interpolate the value of variables into the string. The `original.replace("X", little)` will replace all occurrences of "X" in `original` with the value of `little`, and then it is formatted using `{}`.
