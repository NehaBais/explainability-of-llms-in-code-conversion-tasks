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