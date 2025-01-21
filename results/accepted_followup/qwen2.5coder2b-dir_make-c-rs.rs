fn create_directory(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() -> std::io::Result<()> {
    if let Some(arg) = std::env::args().nth(1) {
        create_directory(&arg)?;
        println!("Directory created successfully");
    } else {
        eprintln!("usage: {} <path>", std::env::args().next().unwrap());
        return Err(std::io::Error::new(
            std::io::ErrorKind::InvalidInput,
            "no path specified",
        ));
    }
    Ok(())
}
