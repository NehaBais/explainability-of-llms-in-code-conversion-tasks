use std::fs::rename;

fn main() {
    // rename "input.txt" to "output.txt" and "docs" to "mydocs"
    let src = String::from("input.txt");
    let dest = String::from("output.txt");
    rename(&src, &dest).unwrap();

    let src_root = String::from("/input.txt");
    let dest_root = String::from("/output.txt");
    rename(&src_root, &dest_root).expect("Failed to rename root input file");

    let docs = String::from("docs");
    let mydocs = String::from("mydocs");
    // The following renaming operations do not work as "/docs" and "/mydocs" are in different filesystems. You would need to use `rename_at` or equivalent function provided by the underlying filesystem, which is hidden from you in this example because it's more error prone.
    // rename(&docs, &mydocs).expect("Failed to rename 'docs' directory");
}
