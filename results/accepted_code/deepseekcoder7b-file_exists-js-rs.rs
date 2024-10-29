use std::fs;

fn main() {
    let current_dir = "."; // The directory where the program is running from.
    let fs_root = "/"; // File system root in Unix and Linux systems. Adjust accordingly if on Windows.

    let file_checker = |path| {
        println!(
            "{} exists: {}",
            path,
            match fs::metadata(path) {
                Ok(_) => "Yes".to_string(),
                Err(_) => "No".to_string(),
            }
        )
    };

    let dir_checker = |path| {
        println!("{} exists: {}", path, if fs::metadata(&path).is_ok() {
            if let Some(meta)=fs::read_dir(&path).next(){
                match meta{
                    Ok(meta)=>match meta.file_type().unwrap().is_dir(){
                        true=>"Yes".to_string(), 
                        false=>"No".to_string()
                    }
                },
            }else{"No".to_string()},
        } else {"No".to_string()})
    };

    file_checker(current_dir.join(".//input.txt")); // Use join to append paths in the case that they are relative and might not start with `./`.
    dir_checker(current_dir.join("docs")); // Same here for directory path.

    file_checker(fs_root.to_string() + "input.txt");
    dir_checker(fs_root.to_string() + "docs");
}
