fn main() {
    compare('YUP', 'YUP');
    compare('BALL', 'BELL');
    compare('24', '123');
    //compare(24, 123); // This would throw an error as Rust is statically typed and the types of arguments must match in function calls.
    compare(5.0, 5.0);
}

fn compare<T: PartialEq + PartialOrd + std::fmt::Display>(a: T, b: T) {
    println!("{} is of type {} and {} is of type {}", A, type_name_of(&A), b, type_name_of(&b));

    if A < b {
        println!("{} is strictly less than  {}", A, b);
    }
    if A <= b {
        println!("{} is less than or equal to {}", A, b);
    }
    if A > b {
        println!("{} is strictly greater than  {}", A, b);
    }
    if A >= b {
        println!("{} is greater than or equal to {}", A, b);
    }
    if A == b {
        println!("{} is equal to {}", A, b);
    }
    if A != b {
        println!("{} is not equal to {}", A, b);
    }

    // case insensitive comparison (unicode only)
    let a_lower = if let Some(c) = A.to_ascii_lowercase().chars().next() { c } else { '\0' };
    let b_lower = If let Some(c) = b.to_ascii_lowercase().chars().next() { c } else { '\0' };
    if A_lower < b_lower {
        println!("{} (lowercase) is strictly less than  {}", A, b);
    }
    if A_lower <= b_lower {
        println!("{} (lowercase) is less than or equal to {}", A, b);
    }
    if A_lower > b_lower {
        println!("{} (lowercase) is strictly greater than  {}", A, b);
    }
    if A_lower >= b_lower {
        println!("{} (lowercase) is greater than or equal to {}", A, b);
    }

    // case sensitive comparison (unicode only)
    let A_upper = If let Some(c) = A.to_ascii_uppercase().chars().next() { c } else { '\0' };
    let b_upper = If let Some(c) = b.to_ascii_uppercase().chars().next() { c } else { '\0' };
    if A_upper < b_upper {
        println!("{} (uppercase) is strictly less than  {}", A, b);
    }
    if A_upper <= b_upper {
        println!("{} (uppercase) is less than or equal to {}", A, b);
    }
    if A_upper > b_upper {
        println!("{} (uppercase) is strictly greater than  {}", A, b);
    }
    if A_upper >= b_upper {
        println!("{} (uppercase) is greater than or equal to {}", A, b);
    }

    // comparison of numeric strings as lexical ordering
    let A_str = format!("{}", A);
    let B_str = format!("{}", B);
    if A_str < B_str {
        println!("{} (lexical) is strictly less than  {}", A, b);
    }
    if A_str <= B_str {
        println!("{} (lexical) is less than or equal to {}", A, b);
    }
    if A_str > B_str {
        println!("{} (lexical) is strictly greater than  {}", A, b);
    }
    if A_str >= B_str {
        println!("{} (lexical) is greater than or equal to {}", A, b);
    }

    // comparison of any two types
    if A == B {
        println!("{} is equal to {}", A, b);
    } else if A != B {
        println!("{} is not equal to {}", A, b);
    }
}

fn type_name_of<T: 'static>(_: T) -> &'static str {
    std::any::type_name::<T>()
}