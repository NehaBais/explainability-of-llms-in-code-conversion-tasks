fn main() {
    let args = std::env::args().collect::<Vec<String>>();

    // Correct usage of unwrap_or, with &String as argument
    let b = args.get(2).unwrap_or(&"1.3.Bar");
}
