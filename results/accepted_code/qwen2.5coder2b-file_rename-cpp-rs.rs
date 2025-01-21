use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").unwrap();
    fs::rename("docs", "mydocs").unwrap();
    fs::rename("/input.txt", "/output.txt").unwrap();
    fs::rename("/docs", "/mydocs").unwrap();

    // Note: The following line is not necessary in Rust due to the use of unwrap.
    // However, it demonstrates how you can handle potential errors gracefully:
    // let result = fs::rename("input.txt", "output.txt");
    // if result.is_err() {
    //     eprintln!("Failed to rename file: {:?}", result);
    // }
}