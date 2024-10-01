use std::fs::{read_dir, rename, File};
use std::io::prelude::*;

fn main() {
    let src = "input.txt".to_string();
    let dst = "output.txt".to_string();

    // here
    if let Err(e) = rename(&src, &dst) {
        eprintln!("Error renaming '{}' to '{}': {}", src, dst, e);
    }

    let dirs = "docs".to_string();
    let mdirs = "/mydocs".to_string();

    // filesystem root
    if let Err(e) = rename(
        &format!("{}/{}", &mdirs, &src),
        &format!("{}/{}", &mdirs, &dst),
    ) {
        eprintln!(
            "Error renaming '{}' to '{}': {}",
            format!("{}{}", mdirs.as_str(), src.as_str()),
            format!("{}{}", mdirs.as_str(), dst.as_str())
        );
    }
    if let Err(e) = rename(
        &format!("{}/{}", &mdirs, &src),
        &format!("{}/{}", &mdirs, &dst),
    ) {
        eprintln!(
            "Error renaming '{}' to '{}': {}",
            format!("{}{}", mdirs.as_str(), src.as_str()),
            format!("{}{}", mdirs.as_str(), dst.as_str())
        );
    }
}
