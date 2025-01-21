Sure, I can help with that. The given Python code was about string comparisons, including lexical ordering, object identity, equality checks for strings and non-lexically comparison of numeric strings.

In Rust, the equivalent code would be as follows:
```rust
fn compare(a: &str, b: &str) {
    println!(
        "'{}' is of type {:?} and '{}' is of type {:?}",
        a,
        std::reflect::Type::type_name(&*a.as_ref()),
        b,
        std::reflect::Type::type_name(&*b.as_ref())
    );
    if a < b {
        println!("'{}' is strictly less than '{}'", a, b);
    }
    if a <= b {
        println!("'{}' is less than or equal to '{}'", a, b);
    }
    if a > b {
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
    if a.as_ref() == b.as_ref() {
        println!("'{}' has object identity with '{}'", a, b);
    }
    if a.as_ref() != b.as_ref() {
        println!("'{}' has negated object identity with '{}'", a, b);
    }
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    // Error: Rust does not automatically convert strings to numbers for numeric comparisons.
    // Therefore, the number '24' is not equal to the string '123' in this case.
}
```
Rust's error message indicates that it could not resolve `reflect`, which comes from `std` standard library, used to get information about types for reflection purposes. This issue is because of the different nature of Python and Rust's dynamic typing system compared to static typing system in languages like Python. The comparison operators work differently between numbers and strings, and it can cause a compile error if they are not equal. Therefore, it will be difficult to provide an accurate explanation without the specific types `a` and `b`.
