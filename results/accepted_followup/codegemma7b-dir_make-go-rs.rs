fn main() -> Result<(), std::io::Error> {
    mkdir_p("./path/to/dir")?;
    Ok(())
}
