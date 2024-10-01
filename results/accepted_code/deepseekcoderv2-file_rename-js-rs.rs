use std::fs;

fn main() {
    // Rename file in current directory
    fs::rename("input.txt", "output.txt").unwrap();

    // Rename file in filesystem root
    if let Ok(file_contents) = fs::read_to_string("c:/input.txt") {
        println!("{}", file_contents);

        // Write the contents of input.txt to output.txt
        fs::write("output.txt", file_contents).unwrap();
    } else {
        eprintln!("Error: Could not read c:/input.txt");
    }

    // Rename directory in current directory
    fs::rename("docs", "mydocs").unwrap();

    // Rename directory in filesystem root
    if let Ok(dir_contents) = fs::read_to_string("c:/docs") {
        println!("{}", dir_contents);

        // Write the contents of c:/docs to c:/mydocs
        fs::write("c:/mydocs", dir_contents).unwrap();
    } else {
        eprintln!("Error: Could not read c:/docs");
    }
}
