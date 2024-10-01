use std::fs;

fn mkdir_all(path: &str, mode: u32) -> Result<(), Error> {
    fs::create_dir_all(path)?;
    fs::set_permissions(path, Permissions::from_mode(mode))?;
    Ok(())
}
