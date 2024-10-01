use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    // Renames file in current directory.
    rename("input.txt", "output.txt")?;

    // Renames a directory in the current directory.
    rename("docs", "mydocs")?;

    // Renames file at root of filesystem. (Requires elevated permissions)
    let root = Path::new("/");
    let input_path = root.join("input.txt");
    let output_path = root.join("output.txt");
    rename(&input_path, &output_path)?;

    // Renames a directory at the root of the filesystem. (Requires elevated permissions)
    let docs_path = root.join("docs");
    let mydocs_path = root.join("mydocs");
    rename(&docs_path, &mydocs_path)?;

    Ok(())
}

fn rename<T: AsRef<Path>, U: AsRef<Path>>(src: T, dst: U) -> io::Result<()> {
    std::fs::rename(src.as_ref(), dst.as_ref())
}
