The error occurs because Rust does not support the comma operator in let statements like `q2, q3`. The correct way to fix this is by using parentheses instead: `(q2, q3)`. 
Here's the corrected code:
```rs
fn main() {
    let string_a = "tacoloco";
    let string_b = "co";

    // String matching 1: Does 'string_a' start with 'string_b'?
    let q1 = &string_a[..string_b.len()] == string_b;
    println!(
        "1: Does '{}%' start with '{}%'? {}",
        string_a,
        string_b,
        if q1 { "Yes." } else { "No." }
    );

    // String matching 2: Is 'string_b' contained in 'string_a'?
    let (q2, _) = string_a.find(string_b);
    println!("2: Is '{}%' contained in '{}%'? {}", string_a, string_b, if q2 { "Yes, at index {}.", q2 } else { "No." });

    // String matching 3: Does 'string_a' end with 'string_b'?
    let (_, q3) = &string_a[string_a.len() - string_b.len()..] == string_b;
    println!(
        "3: Does '{}%' end with '{}%'? {}",
        string_a,
        string_b,
        if q3 { "Yes." } else { "No." }
    );
}
```
In Rust, the let statement can take multiple bindings separated by commas. However, the comma operator is not supported in let statements, so it must be replaced with parentheses. The parentheses allow the compiler to handle multiple bindings correctly.

