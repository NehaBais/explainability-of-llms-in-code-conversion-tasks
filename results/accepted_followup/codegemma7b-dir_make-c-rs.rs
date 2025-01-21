let mut current_path = Path::new("");

while let Some(component) = components.next() {
    current_path = &current_path.join(component);
    if !current_path.exists() {
        fs::create_dir_all(&current_path).unwrap();
    }
}