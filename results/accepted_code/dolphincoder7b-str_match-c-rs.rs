use std::str::FromStr; // Required for parsing strings from input

fn startsWith(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn endsWith(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn doesContain(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    let input = "Hello";
    println!(
        "StartsWith Test ({},{}) : {}",
        input,
        "Hell",
        startsWith(&input, "Hell")
    ); // Use & to pass references instead of strings
    println!(
        "EndsWith Test ({},{}) : {}",
        input,
        "lo",
        endsWith(&input, "lo")
    );
    println!(
        "Contains Test ({},{}) : {}",
        input,
        "ll",
        doesContain(&input, "ll")
    );
}
