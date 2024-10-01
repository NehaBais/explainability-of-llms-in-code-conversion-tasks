use std::fs;

fn main() {
    let path = "output.txt";
    if let Err(e) = fs::File::create(path).map_err(|_| format!("failed to create file '{}'", path))
    {
        eprintln!("Error: {}", e);
        return;
    }

    let dir_path = "docs";
    if let Err(e) =
        fs::create_dir(dir_path).map_err(|_| format!("failed to create directory '{}'", dir_path))
    {
        eprintln!("Error: {}", e);
    }

    // If you want to create a file and directory at the root level,
    // you need administrator rights or execute chown before running the script.

    if let Err(e) = fs::File::create("/root/output.txt")
        .map_err(|_| format!("failed to create file '/root/output.txt'"))
    {
        eprintln!("Error: {}", e);
        return;
    }

    let dir_path = "/root/docs";
    if let Err(e) =
        fs::create_dir(dir_path).map_err(|_| format!("failed to create directory '{}'", dir_path))
    {
        eprintln!("Error: {}", e);
    }
}
