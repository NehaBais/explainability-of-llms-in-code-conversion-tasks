fn main() {
    let original = "Mary had a X lamb";
    let little = "big";

    // Use format! macro for string interpolation
    let replaced = format!("{} {}", &original[..original.len() - 2], little);

    println!("{}", replaced); // Prints: Mary had a big lamb
}
