use std::fs;

fn main() {
    // Rename a file and directory here (in the current working directory)
    fs::rename("input.txt", "output.txt").expect("Failed to rename 'input.txt' to 'output.txt'");
    fs::rename("docs", "mydocs").expect("Failed to rename 'docs' to 'mydocs'");

    // Rename a file and directory in the filesystem root
    fs::rename("/input.txt", "/output.txt")
        .expect("Failed to rename '/input.txt' to '/output.txt'");
    fs::rename("/docs", "/mydocs").expect("Failed to rename '/docs' to '/mydocs'");
}
