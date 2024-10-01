use std::fs;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();

    if args.len() != 1 {
        println!("usage: mkdir <path>");
        return;
    }

    let path_to_create = &args[0];

    if fs::metadata(path_to_create).is_ok() {
        return;
    }

    match fs::create_dir_all(path_to_create) {
        Ok(_) => (),
        Err(e) => {
            eprintln!("couldn't create directory: {}", path_to_create);
            eprintln!("{}", e);
            std::process::exit(-1);
        }
    }
}
