use std::ffi::OsString;
use std::process;

fn main() {
    // rename "input.txt" to "output.txt" in the current working directory
    if let Err(e) = std::fs::rename("input.txt", "output.txt") {
        eprintln!("unable to rename file: {}", e);
        process::exit(1);
    }

    // rename the "docs" directory to "mydocs" in the current working directory
    if let Err(e) = std::fs::rename("docs", "mydocs") {
        eprintln!("unable to rename directory: {}", e);
        process::exit(1);
    }

    // The following two are not straightforward in Rust because it doesn't support absolute paths
    // without a current working directory. A way around this is to use the OsString or String type
    // and manually set the root path, but it's generally better to keep such operations within
    // the current working directory as they are more portable across different operating systems.
    if let Err(e) = std::fs::rename("/input.txt", "/output.txt") {
        eprintln!("unable to rename file at root: {}", e);
        process::exit(1);
    }

    if let Err(e) = std::fs::rename("/docs", "/mydocs") {
        eprintln!("unable to rename directory at root: {}", e);
        process::exit(1);
    }
}
