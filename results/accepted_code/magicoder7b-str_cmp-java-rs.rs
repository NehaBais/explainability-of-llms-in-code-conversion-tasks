fn compare(A: &str, B: &str) {
    if A == B {
        println!("'{}' and '{}' are lexically equal.", A, B);
    } else {
        println!("'{}' and '{}' are not lexically equal.", A, B);
    }

    let a = A.to_uppercase();
    let b = B.to_uppercase();
    if &a == &b {
        println!("'{}' and '{}' are case-insensitive lexically equal.", A, B);
    } else {
        println!(
            "'{}' and '{}' are not case-insensitive lexically equal.",
            A, B
        );
    }

    if A < B {
        println!("'{}' is lexically before '{}'.", A, B);
    } else if A > B {
        println!("'{}' is lexically after '{}'.", A, B);
    }

    let cmp_result = A.cmp(B);

    match cmp_result {
        std::cmp::Ordering::Less => println!("The lexical relationship is: Less"),
        std::cmp::Ordering::Equal => println!("The lexical relationship is: Equal"),
        std::cmp::Ordering::Greater => println!("The lexical relationship is: Greater"),
    }
}

fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}
