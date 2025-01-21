fn create_empty_file(path: &str) -> io::Result<()> {
    let mut file = fs::File::create(path)?;
    io::Write::write_all(&mut file, &[])?;  // changed the reference to be mutable.
    Ok(())
}