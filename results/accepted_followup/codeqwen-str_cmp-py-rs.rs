fn compare<T: PartialEq + PartialOrd + std::fmt::Display, const A: char>(A: T, b: T) {
    if A < b {
        println!("{} is less than {}", A, b);
    } else if A > b {
        println!("{} is greater than {}", A, b);
    } else {
        println!("{} is equal to {}", A, b);
    }

    let a_lower = if let Some(c) = A.to_ascii_lowercase().chars().next() {
        c
    } else {
        '\0'
    };
}
