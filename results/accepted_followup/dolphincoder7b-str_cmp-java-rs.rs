use std::cmp;
fn main() {
    println!("Hello, world!");
    compare(&String::from("hello"), &String::from("hello"));
    compare(&String::from("5"), &String::from("5.0"));
    compare(&String::from("java"), &String::from("Java"));
    compare(&String::from("ĴÃVÁ"), &String::from("ĴÃVÁ"));
    compare(&String::from("ĴÃVÁ"), &String::from("ĵãvá"));
}
fn compare(a: &str, b: &str) {
    if a == b {
        println!("{} and {} are lexically equal.", a, b);
    } else {
        println!("{} and {} are not lexically equal.", a, b);
    }

    let lower_case_a = a.to_lowercase();
    let lower_case_b = b.to_lowercase();
    if lower_case_a == lower_case_b {
        println!("{} and {} are case-insensitive lexically equal.", a, b);
    } else {
        println!("{} and {} are not case-insensitive lexically equal.", a, b);
    }

    let result = cmp::min(cmp::max(a.cmp(&lower_case_b), lower_case_a.cmp(&b)), 0);
    match result {
        1 => println!("{} is lexically before {}.", a, b),
        -1 => println!("{} is lexically after {}.", a, b),
        0 => println!("The lexical relationship between {} and {} is equal.", a, b),
        _ => panic!("Unexpected result"),
    }

    let result = cmp::min(cmp::max(a.cmp(&b), lower_case_a.cmp(&lower_case_b)), 0);
    match result {
        1 => println!("{} is not lexically before {}.", a, b),
        -1 => println!("{} is not lexically after {}.", a, b),
        0 => panic!("Unexpected result"),
        _ => panic!("Unexpected result"),
    }

    let numeric_result = cmp::min(
        cmp::max(a.cmp(&"5.0".to_string()), lower_case_a.cmp("5")),
        0,
    );
    match numeric_result {
        1 => println!("{} is lexically before {} in a numerical comparison.", a, b),
        -1 => println!("{} is lexically after {} in a numerical comparison.", a, b),
        0 => panic!("Unexpected result"),
        _ => panic!("Unexpected result"),
    }
}
