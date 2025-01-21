use std::fs;
pub fn mkdirp<P: AsRef<std::ffi::OsStr>>(path: P) -> std::io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}
