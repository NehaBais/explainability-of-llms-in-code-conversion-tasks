use std::fs;

fn main() {
    // Function to handle errors
    fn fct(err: std::io::Result<()>) {
        if let Err(e) = err {
            eprintln!("{}", e);
        }
    }

    // Create file in the current working directory
    fs::write("output.txt", "").map_err(fct).unwrap();

    // Create file in the root directory (assuming Unix-like filesystem)
    fs::write("/output.txt", "").map_err(fct).unwrap();

    // Create directory in the current working directory
    fs::create_dir("docs").map_err(fct).unwrap();

    // Create directory in the root directory (assuming Unix-like filesystem)
    fs::create_dir("/docs").map_err(fct).unwrap();
}