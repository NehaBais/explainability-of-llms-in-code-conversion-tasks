use std::fs;
use std::io::Write;
use std::process;

fn mkdirp(path: &str) {
    // Create a directory and any missing parents. If already exists, return successfully.
    if let Err(_e) = fs::create_dir_recursive(path) {
        match fs::read_dir_meta(path) {
            Ok(_m) => (),
            Err(ioerr) => match ioerr.kind() {
                fs::ErrorKind::Access => println!("Failed to access path: {}", &ioerr),
                fs::ErrorKind::NoPermissions => {
                    println!("No permissions to read directory: {}", &ioerr)
                }
                fs::ErrorKind::NotFound => (),
                other => println!("Some other error: {}", &ioerr),
            },
        };
    } else {
        match fs::read_dir_meta(path) {
            Ok(m) => println!("Directory created successfully at path: {}", m.path()),
            Err(ioerr) => match ioerr.kind() {
                fs::ErrorKind::Access => println!("Failed to access path: {}", &ioerr),
                fs::ErrorKind::NoPermissions => {
                    println!("No permissions to read directory: {}", &ioerr)
                }
                fs::ErrorKind::NotFound => (),
                other => println!("Some other error: {}", &ioerr),
            },
        };
    }
}
