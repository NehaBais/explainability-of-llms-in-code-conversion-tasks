use std::fs;

fn main() {
    rename_file("input.txt", "output.txt");
    rename_directory("docs", "mydocs");

    // Rename file in root directory
    let mut file = fs::File::new(&[0, '/', 0].into().as_str()).unwrap();
    file.rename(&[1, '/', 2, '_', 'o', 'u', 't', 'p', 'u', 't'].into())
        .expect("Couldn't rename file in root directory");

    // Rename directory in root directory
    let mut dir =
        fs::DirEntry::new(&[0, '/', 1, '_', 'd', 'o', 'c', 'u', 'r'].into().as_str()).unwrap();
    dir.rename(&[0, '/', 2, '_', 'm', 'y', 'd', 'o', 's'].into())
        .expect("Couldn't rename directory in root directory");
}

fn rename_file(from: &str, to: &str) {
    if let Err(_e) = fs::rename(
        &[0, '/', 1, '_', 'i', 'n', 'p', 'u'].into().as_str(),
        &[0, '/', 1, '_', 'o', 'u', 't', 'p', 'u', 't'],
    ) {
        println!(
            "Couldn't rename file from {} to {}",
            &[0, '/', 1, '_', 'i', 'n', 'p', 'u'].into().as_str(),
            &[0, '/', 1, '_', 'o', 'u', 't', 'p', 'u', 't'].into()
        );
    }
}

fn rename_directory(from: &str, to: &str) {
    if let Err(_e) = fs::rename(
        &[0, '/', 1, '_', 'd', 'o', 'c', 'u', 'r'].into().as_str(),
        &[0, '/', 1, '_', 'm', 'y', 'd', 'o', 's'].into(),
    ) {
        println!(
            "Couldn't rename directory from {} to {}",
            &[0, '/', 1, '_', 'd', 'o', 'c', 'u', 'r'].into().as_str(),
            &[0, '/', 1, '_', 'm', 'y', 'd', 'o', 's'].into()
        );
    }
}
