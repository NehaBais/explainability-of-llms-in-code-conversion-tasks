In Rust, we don't have a direct equivalent for the print function provided in Python. However, you can replace it with println! to achieve the same result. We will also need to convert some types since Rust doesn't allow implicit type conversion. 

Here's the modified code:
```rust
fn compare(a: &str, b: &str) {
    let a_type = std::any::type_name::<i32>(a);
    let b_type = std::any::type_name::<i32>(b);

    println!("{} is of type {} and {} is of type {}", a, a_type, b, b_type);
    
    if a <  b {      println!("{} is strictly less than   {}", a, b)
    }
    if a <= b {      println!("{} is less than or equal to  {}", a, b)
    }
    if a >  b {      println!("{} is strictly greater than   {}", a, b)
    }
    if a >= b {      println!("{} is greater than or equal to  {}", a, b)
    }
    if a == b {      println!("{} is equal to  {}", a, b)
    }
    if a != b {      println!("{} is not equal to  {}", a, b)
    }
}
```
Please note that `a_type` and `b_type` are only used for printing the types. If you want to achieve more complex string comparisons in Rust, you can use the String::compare function which takes an optional case sensitivity parameter. 

Additionally, it's worth mentioning that due to Rust's static typing system, you must define all variables with a specific type at compile time and not just let the compiler infer their types based on the initial values. In this code, we defined `a` and `b` as &str which means they are references to strings.

Here's an example usage:

let s1 = String::from("Apple");
let s2 = String::from("Banana");
compare(&s1, &s2);

In this case, the types of `s1` and `s2` are automatically inferred by Rust to be Strings (as per the function signature). As a result, when comparing them with compare(), they need to be passed as references (&str) because the function expects references to strings. If you pass the actual String objects, there will be an error at compile time.

// Uncomment this line and try compiling it:
// compare(s1, s2);

This way, Rust ensures that both types of variables passed to compare() are string references (&str). 

Remember, these examples are just for demonstration purposes. In real-world applications, you should avoid comparing numeric strings lexically as they may not be treated the same way in all languages and libraries. Instead, consider using numerical parsing functions (e.g., parse_int) or implement your own comparison logic based on specific requirements.
