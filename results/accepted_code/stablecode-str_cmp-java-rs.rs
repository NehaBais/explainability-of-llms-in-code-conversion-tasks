fn main() {
    compare("Hello", "Hello"));
    compare("5", "5.0"));
    compare("java", "Java"));
    compare("ĴÃVÁ", "ĴÃVÁ"));
    compare("ĴÃVÁ", "ĵãvá");

    println!();

    if compare_ignore_case("Hello", "hello")) {
        println!("'Hello' is case-insensitive lexically before 'hello'.");
    } else {
        println!("'Hello' is not case-insensitive lexically before 'hello'.");
    }

    println!();

    if compare_ignore_case("hello", "world")) {
        println!("'hello' is case-insensitive lexically after 'world'.");
    } else {
        println!("'hello' is not case-insensitive lexically after 'world'.");
    }

    println!();

    if compare_ignore_case("Hello", "World")) {
        println!("'Hello' and 'World' are both case-insensitive lexically equal to each other.");
    } else {
        println!("'Hello' and 'World' are not case-insensitive lexically equal to each other.");
    }

    println!();

    if compare_ignore_case("ĴÃVÁ", "ĵãvá")) {
        println!(""'ĴÃVÁ'' is case-insensitive lexically before '''ĵãvá'''."
        );
    } else {
        println!("""ĴÃVÁ""" is not case-insensitive lexically equal to """ĵãvá"".")
    }

    println!();

    if compare_ignore_case("ĴÃVÁ", "Java")) {
        println!("""ĴÃVÁ""") is not case-sensitive lexically equal to ""Java""."
        );
    } else {
        println!(""""ĴÃVÁ""") is not case-sensitive lexically equal to ""Java"".");
    }
}

fn compare(a: &str, b: &str) -> bool {
    a.eq_ignore_ascii_whitespace(b)
}

fn compare_ignore_case(a: &str, b: &str) -> bool {
    a.eq_ignore_ascii_whitespace(&normalize(b)))
}

fn normalize(s: &str) -> String {
    let s = s.to_lowercase();
    let s: String = s.chars().filter(|c| c.is_alphanumeric())).collect();
    if let Some(c) = s.chars().next() {
        s.replace(&c, "").trim().to_string()
    } else {
        String::new()
    }
}