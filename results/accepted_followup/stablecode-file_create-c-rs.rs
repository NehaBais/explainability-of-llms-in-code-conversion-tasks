use std::fs::File;
use std::io::{self, Write};
use std::os::unix::fs::PermissionsExt;
use std::{fs, metadata};

fn main() -> io::Result<()> {
    // Create a new empty file called "output.txt" of size 0 bytes and set the permissions to 0644 (rw-r-----)).
    let mut output_file = File::create("output.txt")?;
    output_file.set_permissions(0o644))?;

    // Write some data into the file.
    write!(output_file, "Hello Rust!\n")?;

    // Close the file.
    drop(output_file);

    // Create a new directory called 
"docs".
    fs::create_dir("docs")?;

    Ok(())
}