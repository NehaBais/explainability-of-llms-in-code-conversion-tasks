use std::fs;
fn main() {
    let input_path = "input.txt";
    match fs::read_to_string(input_path) {
        Ok(file_content) => println!("{}", file_content),
        Err(_) => println!("Error: could not read the file"),
    }
}
