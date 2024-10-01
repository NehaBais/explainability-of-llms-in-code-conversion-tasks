use std::fs;

fn main() {
    let err = "File move error";
    // Let's assume these paths are in the current working directory
    if let (Ok(src_path), Ok(dest_path)) = (fs::PathBuf::new("input.txt"), fs::PathBuf::new("output.txt")) {
        fs::rename(&src_path, &dest_path).expect(err);
    } else if let (Ok(src_path), Ok(dest_path)) = (fs::PathBuf::new("/input.txt"), fs::PathBuf::new("/output.txt")) {
        fs::rename(&src_path, &dest_path).expect(err);
    } else {}  // Handle error if the paths do not exist
    
    // Let's assume these paths are in filesystem root
    if let (Ok(src_path), Ok(dest_path)) = (fs::PathBuf::new("docs"), fs::PathBuf::new("mydocs.txt")) {
        fs::rename(&src_path, &dest_path).expect(err);
    } else if let (Ok(src_path), Ok(dest_path)) = (fs::PathBuf::new("/docs"), fs::PathBuf::new("/mydocs/")) {
        fs::rename(&src_path, &dest_path).expect(err);
    } else {}  // Handle error if the paths do not exist
}