fn compare(a: &str, b: &str) {
    println!(
        "'{}' is of type {:?} and '{}' is of type {:?}",
        a,
        std::any::type_name::<&str>(),
        b,
        std::any::type_name::<&str>()
    );

    match a.cmp(b) {
        std::cmp::Ordering::Less => println!("'{}' is strictly less than '{}'", a, b),
        std::cmp::Ordering::Equal => println!("'{}' is equal to '{}'", a, b),
        std::cmp::Ordering::Greater => println!("'{}' is strictly greater than '{}'", a, b),
    }

    if a != b {
        println!("'{}' is not equal to '{}'", a, b);
    }

    if a == b {
        println!("'{}' has the same object identity with '{}'", a, b);
    }
}

fn compare_case_insensitive(a: &str, b: &str) {
    println!(
        "'{}' is of type {:?} and '{}' is of type {:?}",
        a,
        std::any::type_name::<&str>(),
        b,
        std::any::type_name::<&str>()
    );

    if a.eq_ignore_ascii_case(b) {
        println!("'{}' is equal to '{}' ignoring ASCII case", a, b);
    } else {
        println!("'{}' is not equal to '{}' ignoring ASCII case", a, b);
    }
}

fn compare_numbers(a: &str, b: &str) {
    match (a.parse::<i32>(), b.parse::<i32>()) {
        (Ok(a), Ok(b)) => println!(
            "'{}' is {} than '{}'",
            a,
            if a < b { "less" } else { "greater" },
            b
        ),
        _ => println!(
            "Cannot compare '{}' and '{}'. One or both are not valid integers.",
            a, b
        ),
    }
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare_case_insensitive("YUP", "yup");
    compare_numbers("123", "24");
}
