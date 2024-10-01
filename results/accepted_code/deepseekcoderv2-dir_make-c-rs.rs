use std::fs::create_dir_all;

fn main() {
    let args: Vec<String> = std::env::args().collect();
    if args.len() != 2 {
        eprintln!("usage: {} <path>", &args[0]);
        std::process::exit(1);
    }
    create_dir_all(&args[1]).unwrap();
}
