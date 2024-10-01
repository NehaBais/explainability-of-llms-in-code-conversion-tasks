Here is the equivalent Rust code:

```rust
let original = "Mary had a X lamb".to_string();
let little = "little";

original.replace("X".to_string(), little.to_string());
//println!("{}",original); // Uncomment this line to print the modified string
```
Please note that Rust is a language that has strict ownership rules and type safety, which also helps avoid many common programming mistakes.

Also, unlike JavaScript, Rust does not perform implicit type conversions like "1" -> 1 in JavaScript. In contrast, Rust requires explicit type conversions using functions such as `to_string()`, `parse()`, etc., depending on the desired type conversion.

Finally, please note that in Rust, string slices (i.e., &str)) are similar to JavaScript strings but they cannot be modified like strings in JavaScript and instead, one would need to create a new string slice with the desired modifications. This is why replacing "X" with "little" in the original string would not result in any modification of the string itself because string slices in Rust are immutable by default.

To achieve the equivalent of JavaScript's string interpolation with variable replacement, in Rust, you can use the `format!` macro or the `println!` macro (if you want to print the modified string directly).

Here's an example using the `format!` macro:

let original = "Mary had a X lamb";
let little = "little";

// Replace 'X' with 'little' in the original string
let replaced = format!(
    "{}",
    original.replace("X".to_string(), little.to_string()))
);

println!("{}", replaced); // Print the modified string directly

Here's an example using the `println!` macro:

let original = "Mary had a X lamb";
let little = "little";

// Replace 'X' with 'little' in the original string
let replaced = format!(
    "{}",
    original.replace("X".to_string(), little.to_string()))
);

println!("{}", replaced); // Print the modified string directly

In both examples above, we use the `format!` macro or the `println!` macro to interpolate the original string with the variable replacement.
