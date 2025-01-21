fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

fn compare(A: &str, B: &str) {
    if A == B {
        println!("'{}' and '{}' are lexically equal.", A, B);
    } else {
        println!("'{}' and '{}' are not lexically equal.", A, B);
    }

    if A.to_lowercase() == B.to_lowercase() {
        println!("'{}' and '{}' are lexically equal (ignoring case).", A, B);
    } else {
        println!(
            "'{}' and '{}' are not lexically equal (ignoring case).",
            A, B
        );
    }

    println!("The lexical relationship is: {:?}", A.cmp(B));
}
