use std::fs;

fn fct(err: Option<std::io::Error>) {
    if let Some(err) = err {
        println!("{}", err);
    }
}

fs::File::create("output.txt").unwrap();
fs::File::create("/output.txt").unwrap();

fs::create_dir("docs").unwrap();
fs::create_dir("/docs").unwrap();