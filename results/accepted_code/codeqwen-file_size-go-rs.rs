use std::fs;

fn print_file_size(f: &str) {
    match fs::metadata(f) {
        Ok(m) => println!("{}", m.len()),
        Err(e) => eprintln!("Error: {}", e),
    };
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
