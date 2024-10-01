use std::fs;

fn main(args: Vec<String>) {
    if args.len() != 2 {
        println!("usage: mkdir <path>");
        std::process::exit(1);
    }

    let path_to_create = &args[1];

    if fs::metadata(path_to_create).is_ok() {
        return;
    }

    match fs::create_dir_all(&path_to_create) {
        Ok(_) => (),
        Err(e) => {
            eprintln!("couldn't create directory: {}", path_to_create);
            std::process::exit(1);
        }
    }
}
