fn main() {
    let path = "./temp/hello";
    create_directory(path).unwrap();
}

fn create_directory(dir_name: &str) -> Result<(), Box<dyn Error>> {
    if Path::new(&dir_name).exists() {
        println!("Directory {} already exists", dir_name);
        return Ok(());
    }
    let mut path = PathBuf::from(dir_name);
    for component in path.components().skip(1) {
        // Skip the first element which is empty string ""
        path = path.join(component);
        if !path.exists() {
            fs::create_dir(&path)?;
        } else if !fs::metadata(&path).unwrap().is_dir() {
            panic!("{} exists and is not a directory", path.display());
        }
    }
    Ok(())
}
