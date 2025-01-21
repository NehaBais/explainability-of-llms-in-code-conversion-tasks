use std::fs;
use std::path::Path;

fn main() {
    let file_a = Path::new("file.txt");
    println!(
        "{:?},  {} bytes",
        <Path as AsRef<_>>::as_ref(file_a).unwrap(),
        <Option<Metadata> as Unwrap<&Metadata>>::unwrap().len()
    );

    let file_b = Path::new("/file.txt");
    if let Ok(meta) = fs::metadata(file_b) {
        println!("{:?},  {} bytes", file_b, meta.len());
    } else {
        println!("Error: Could not find the file.");
    }
}
