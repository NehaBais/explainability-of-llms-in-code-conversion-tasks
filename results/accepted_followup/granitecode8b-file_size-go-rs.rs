use std::os::unix::fs::MetadataExt;
fn print_file_size(f: &str) {
    if let Ok(stat) = std::fs::metadata(f) {
        println!("{}", stat.size());
    } else {
        eprintln!("Error getting file size");
    }
}
fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
