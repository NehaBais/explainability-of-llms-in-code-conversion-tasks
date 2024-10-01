use std::path::Path;

fn main() {
    let path1 = "docs/input.txt";
    let path2 = "/docs/input.txt";

    if Path::new(path1).exists() {
        println!("{} exists.", path1);
    } else {
        println!("{} does not exist.", path1);
    }

    if Path::new(path2).exists() {
        println!("{} exists.", path2);
    } else {
        println!("{} does not exist.", path2);
    }
}
