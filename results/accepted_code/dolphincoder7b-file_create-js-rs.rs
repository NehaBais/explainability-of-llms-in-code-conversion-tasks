use std::fs;
fn main() {
    if let Err(err) = fs::write_all("./output.txt".as_bytes(), &[]) {
        println!("{}", err);
    }

    if let Err(err) = fs::write_all("/output.txt".as_bytes(), &[]) {
        println!("{}", err);
    }

    if let Err(err) = fs::create_dir("docs") {
        println!("{}", err);
    }

    if let Err(err) = fs::create_dir("/docs") {
        println!("{}", err);
    }
}
