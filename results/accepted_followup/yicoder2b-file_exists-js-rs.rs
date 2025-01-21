use std::fs;

fn main() {
    let file_exists = fs::File::exists("input.txt");
    println!("File exists: {}", file_exists);

    let file_exists = fs::File::exists("c:/input.txt");
    println!("File exists: {}", file_exists);

    let folder_exists = fs::Dir::exists("docs");
    println!("Folder exists: {}", folder_exists);

    let folder_exists = fs::Dir::exists("c:/docs");
    println!("Folder exists: {}", folder_exists);
}