use std::fs::{create_dir, open, File};
use std::io::Write;

fn main() {
    // Create the output.txt file if it doesn't exist already and set its size to 0 bytes
    let mut fd: Result<File> = open("output.txt", Ok(File::new()));
    if let Err(_) = fd {
        fd = create_dir(&["output.txt"])
            .map(|mut f| f.create().expect("Failed to create output.txt file"))
    } else {
        fd.unwrap().truncate(0); // Set its size to 0 bytes
    };

    // Create the "docs" directory if it doesn't exist already and set its permissions
    let fd: Result<File> = open("docs", Ok(File::new()));
    if let Err(_) = fd {
        create_dir(&["docs"])
            .map(|mut f| {
                f.set_permissions(
                    true, /* True for owner, group and others */
                    false, false, 0750,
                )
            })
            .expect("Failed to create docs directory");
    } else {
        fd.unwrap(); // Do nothing as the directory already exists
    };
}
