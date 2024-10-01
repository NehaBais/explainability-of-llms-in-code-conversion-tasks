fn compare(A: &str, B: &str) {
    if A == B {
        println!("{} and {} are lexically equal.", A, B);
    } else {
        println!("{} and {} are not lexically equal.", A, B);
    }

    if A.to_lowercase() == B.to_lowercase() {
        println!("{} and {} are case-insensitive lexically equal.", A, B);
    } else {
        println!("{} and {} are not case-insensitive lexically equal.", A, B);
    }

    match A.cmp(B) {
        std::cmp::Ordering::Less => println!("{} is lexically before {}", A, B),
        std::cmp::Ordering::Greater => println!("{} is lexically after {}", A, B),
        _ => (),
    }

    match A.cmp(B) {
        std::cmp::Ordering::Greater | std::cmp::Ordering::Equal => {
            println!("{} is not lexically before {}", A, B)
        }
        _ => (),
    }

    match A.cmp(B) {
        std::cmp::Ordering::Less | std::cmp::Ordering::Equal => {
            println!("{} is not lexically after {}", A, B)
        }
        _ => (),
    }

    println!("The lexical relationship is: {}", A.cmp(B));
    println!(
        "The case-insensitive lexical relationship is: {}",
        A.to_lowercase().cmp(&B.to_lowercase())
    );
}
fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("Ĵãº", "ĵãº");
}
