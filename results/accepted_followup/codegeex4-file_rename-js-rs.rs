fn move_here(src: &str, dest: &str) -> io::Result<()> {
    let src_path = PathBuf::from(src);
    let dest_path = PathBuf::from(dest);
    if src_path.exists() {
        fs::rename(&src_path, &dest_path)?;
        println!("Renamed {} to {}", src_path.display(), dest_path.display());
    } else {
        eprintln!(
            "Source file or directory does not exist: {}",
            src_path.display()
        );
    }
    Ok(())
}
