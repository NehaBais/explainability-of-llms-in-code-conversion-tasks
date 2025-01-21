fn main() {
    std::fs::create_directory("docs");

    let root = "/";
    let mut docs_path = std::path::PathBuf::from(root).join("docs");
    if !docs_path.exists() {
        std::fs::create_dir(&docs_path)).unwrap();
    }
}