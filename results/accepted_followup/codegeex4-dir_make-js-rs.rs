fn main() {
    let result = mkdirp("./path/to/dir");
    match result {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}
