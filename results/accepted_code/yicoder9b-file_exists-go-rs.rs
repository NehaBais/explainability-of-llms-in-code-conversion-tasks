use std::path::Path;

fn print_stat(p: &str) {
    match Path::new(p).metadata() {
        Err(e) => eprintln!("{}", e),
        Ok(m) => match m.is_dir() {
            true => println!("{} is a directory", p),
            false => println!("{} is a file", p),
        },
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
