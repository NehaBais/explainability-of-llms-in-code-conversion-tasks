use std::fs;

fn print_file_size(f: &str) {
    match fs::metadata(f) {
        Ok(stat) => println!("{}", stat.len()),
        Err(error) => eprintln!("{}", error),
    }
}

fn main() {
    print_file_size("input.txt");
    // Replace the following path with the appropriate one for your system.
    print_file_size("/path/to/your/root/directory/input.txt");
}
