use std::process::exit;

fn main() {
    let src = "input.txt".to_string();
    let dest = "output.txt".to_string();
    if let err = File::rename(&src, &dest, None) {
        eprintln!("Error renaming files: {:?}", err);
        exit(1);
    }

    // Now for the root directory as well
    let src_root = format!(
        "{}/{}/docs",
        std::process::env().get("HOME").unwrap(),
        app_name()
    );
    let dest_root = format!(
        "{}/{}/mydocs",
        std::process::env().get("HOME").unwrap(),
        app_name()
    );
    if let err = File::rename(&src_root, &dest_root, None) {
        eprintln!("Error renaming files: {:?}", err);
        exit(1);
    }
}
