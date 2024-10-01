use std::fs;

fn create_file(path: &str) -> std::io::Result<()> {
    std::fs::File::create(path)?;
    Ok(())
}

fn create_dir(path: &str) -> std::io::Result<()> {
    fs::create_dir(path)?;
    Ok(())
}

fn main() {
    if let Err(e) = create_file("input.txt") {
        println!("{}", e);
    };

    if let Err(e) = create_file("/input.txt") {
        println!("{}", e);
    }

    if let Err(e) = create_dir("docs") {
        println!("{}", e);
    };

    if let Err(e) = create_dir("/docs") {
        println!("{}", e);
    }
}
