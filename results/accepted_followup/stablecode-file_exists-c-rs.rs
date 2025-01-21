fn check_reg(path: &str) -> bool {
    let path = std::path::Path::new(path);
    path.is_file()
}

fn check_dir(path: &str) -> bool {
    let path = std::path::Path::new(path);
    path.is_dir()
}

fn main() {
    println!("input.txt is a regular file? {}", 
                     check_reg("input.txt") ? "yes" : "no");

    println!("docs is a directory? {}",
                    check_dir("docs") ? "yes" : "no");

    println!("/input.txt is a regular file? {}",
                   check_reg("/input.txt") ? "yes" : "no");

    println!("/docs is a directory? {}",
                   check_dir("/docs") ? "yes" : "no");
}
