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
    compare(&5i32.to_string(), &123i32.to_string());
}
