The error in this code is caused by two issues: using the deprecated method `str::replace`, which takes 3 arguments, instead of 2; and trying to find a length for variable `toBeReplaced` using the deprecated method `len()`, when it should be `len()` without brackets.

Here's the corrected code:

```rust
fn main() 
{
    let original = "Mary had a X lamb.";
    let to_be_replaced = "X";
    let replacement = "little";

    // Using format! for string interpolation
    let new_string = format!(
        "{} {} {}",
        original.replace(original.find(to_be_replaced)),
        to_be_replaced.len(),
        replacement
    );

    println!("String after replacement: 
{}", new_string);
}
```

This code uses the correct methods and variables to perform string interpolation with character sequence replacing as specified in the original C++ code.
