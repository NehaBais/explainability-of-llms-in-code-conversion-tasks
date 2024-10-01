use std::fs::StatResult;
use std::process;

fn main() {
    let input = "input.txt".to_string();
    print_file_size(&input);

    let root_input = "/input.txt".to_string();
    print_file_size(&root_input);
}

fn print_file_size(filename: &str) {
    match stat(filename) {
        Ok(stat) => {
            println!("{}", stat.st_size);
        }
        Err(e) => {
            eprintln!(
                "Error occurred while trying to read file '{}': {}",
                filename, e
            );
            process::exit(-1);
        }
    };
}
