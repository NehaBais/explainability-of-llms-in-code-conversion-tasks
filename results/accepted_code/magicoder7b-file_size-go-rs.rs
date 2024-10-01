use std::fs;

fn print_file_size(f: &str) {
    match fs::metadata(f) {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("{:?}", e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
