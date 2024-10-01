fn print_stat(path: &str) {
    match std::fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{} is a directory", path);
            } else {
                println!("{} is a file", path);
            }
        }
        Err(err) => {
            println!("{}", err);
        }
    }
}
fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
