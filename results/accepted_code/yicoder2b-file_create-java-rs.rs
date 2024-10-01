use std::fs;

fn main() {
    let dir = if let Ok(_) = fs::create_dir("docs") {
        Some("/docs/".to_string())
    } else {
        None
    };
    if let Some(path) = &dir {
        println!("{}", path);
    }

    let file = if fs::File::new(&*path!["output.txt"]).is_dir() {
        Some(fs::File::new(&*path!["output.txt"]).dup())
    } else {
        None
    };
    if let Some(file) = &file {
        println!("{}", file);
    }
}
