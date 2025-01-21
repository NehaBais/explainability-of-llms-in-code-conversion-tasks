 To convert the given Python code to Rust and demonstrate various string comparisons, we need to consider how Rust handles strings and their comparisons. Rust uses `&str` for string slices and `String` for owned strings. Here's how you can achieve similar functionality in Rust:

```rust
fn compare(a: &str, b: &str) {
    println!("{} is of type {:?} and {} is of type {:?}", a, a.type_of(), b, b.type_of());

    if a <  b {
        println!("'{}' is strictly less than '{}'", a, b);
    }
    if a <= b {
        println!("'{}' is less than or equal to '{}'", a, b);
    }
    if a >  b {
        println!("'{}' is strictly greater than '{}'", a, b);
    }
    if a >= b {
        println!("'{}' is greater than or equal to '{}'", a, b);
    }
    if a == b {
        println!("'{}' is equal to '{}'", a, b);
    }
    if a != b {
        println!("'{}' is not equal to '{}'", a, b);
    }

    // Rust does not have direct object identity checks like Python's `is` and `is not`, so we skip these.
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    // Uncomment the next line to see an example where types are different and comparisons are not valid
    // compare(24, 123);
    compare(5.0, 5.0);
}

// Extension trait to get type information at runtime in Rust (useful for debugging)
trait TypeOf {
    fn type_of(&self) -> &'static str;
}

impl<T> TypeOf for T {
    fn type_of(&self) -> &'static str {
        std::any::type_name::<T>()
    }
}
```

### Explanation:
1. **Type Checking and Printing**: Rust does not have a direct equivalent to Python's `type(obj)` for runtime type checking, but we can use an extension trait (`TypeOf`) to achieve this. This is useful for debugging and ensuring we understand the types involved in comparisons.
2. **String Comparisons**: In Rust, string slices (`&str`) can be compared lexically using the `<`, `<=`, `>`, and `>=` operators. These operators perform a lexicographical comparison, similar to Python's behavior for strings.
3. **Equality Checks**: The equality checks (`==` and `!=`) are straightforward in Rust as well.
4. **Case Sensitivity**: By default, string comparisons in Rust are case-sensitive if the strings contain different cases. For case-insensitive comparison, you would need to convert both strings to a common case (e.g., lower or upper) before comparing them. This can be done using methods like `to_lowercase()` or `to_uppercase()`.
5. **Numeric String Comparison**: Rust treats numeric strings lexically if they are part of the same type system context, but you need to ensure that both operands are of a comparable type (e.g., all numbers). If you mix different types like integers and floats in comparisons, it will not compile due to type mismatch unless explicitly cast or handled appropriately.

This Rust code demonstrates basic string comparisons similar to the Python example provided, including handling different types and ensuring proper comparisons based on the context of each operation.
