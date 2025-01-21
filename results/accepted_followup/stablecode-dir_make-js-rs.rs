pub fn mkdirp(path: impl AsRef<Path>)) 
-> Result<(), std::io::Error> 
{
    let path = path.as_ref();

    if let Ok(_) = fs::metadata(path) {
        return Ok(());
    }

    if let Err(e) = fs::create_dir_all(path.parent()) {
        return Err(e);
    }

    if let Err(e) = fs::create_dir(path) {
        return Err(e);
    }

    Ok(())
}