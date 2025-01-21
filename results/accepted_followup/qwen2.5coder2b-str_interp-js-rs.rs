fn main() {
    let original = "Mary had a X lamb";
    let little = "little";

    // Using format! for string interpolation
    let replaced = format!("{} had a {} lamb", original, little);

    println!("{}", replaced);
}
