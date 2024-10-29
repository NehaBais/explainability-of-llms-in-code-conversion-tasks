use std::fs;
use std::io::Result;

fn create_file(filename: &str) -> Result<()> {
    let _ = fs::File::create(filename)?;
    println!("File {} created!", filename);
    Ok(())
}

fn create_dir(dirname: &str) -> Result<()> {
    if !std::path::Path::new(dirname).exists() {
        fs::create_dir(dirname)?;
        println!("Directory {} created!", dirname);
    } else {
        println!("Directory {} already exists.", dirname);
    }

    Ok(())
}

fn main() -> Result<()> {
    let cwd = std::env::current_dir()?;
    let root = "/"; // This won't work in all systems, and it wouldn't be portable.
    create_file("output.txt")?;
    create_file(cwd.join("output.txt"))?;
    create_dir("docs")?;
    create_dir(root.to_str().unwrap().into_owned() + "docs")?; // This won't work on Windows due to backslashes in path names. It is not portable.

    Ok(())
}
