The equivalent Rust code for the given Python code would be as follows:

```rust
fn compare(a: &str, b: &str) {
    println!("'{}' is of type {:?} and '{}' is of type {:?}", a, std::reflect::Type::type_name(&*a.as_ref()), b, std::reflect::Type::type_name(&*b.as_ref()));
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
    compare(&5i32.to_string(), &123i32.to_string());
}
```
Please note that, in Rust, type safety is enforced at compile-time as opposed to Python's dynamic typing. This means the types of `a` and `b` must be known at runtime, hence `&str` (string slice) rather than Python's `str`. Also, when comparing numbers they are treated lexically which may not always be what is intended in some cases. Rust does support the comparison of numeric strings as it treats them numerically but with care.
