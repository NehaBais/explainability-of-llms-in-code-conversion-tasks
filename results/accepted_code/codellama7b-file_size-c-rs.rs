use std::fs;
use std::io;
use std::os::unix::fs::MetadataExt;
use std::path;

fn main() -> io::Result<()> {
    let current_working_dir = path::PathBuf::from(".");
    let file_in_current_working_dir = fs::File::open(current_working_dir.join("input.txt"))?;
    let metadata_for_file_in_current_working_dir = file_in_current_working_dir.metadata()?;
    println!(
        "size of the file in the current working directory: {}",
        metadata_for_file_in_current_working_dir.len()
    );

    let root_directory = path::PathBuf::from("/");
    let file_in_root_directory = fs::File::open(root_directory.join("input.txt"))?;
    let metadata_for_file_in_root_directory = file_in_root_directory.metadata()?;
    println!(
        "size of the file in the root directory: {}",
        metadata_for_file_in_root_directory.len()
    );

    Ok(())
}
