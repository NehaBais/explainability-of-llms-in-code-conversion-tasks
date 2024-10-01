use std::fs;

fn main() {
    let mut file = match fs::OpenOptions::new()
        .create(true)
        .writeable()
        .open("output.txt")
    {
        Err(e) => println!("Error opening output.txt: {:?}", e),
        Ok(_) => {} // file will be dropped if we reach here
    };
    match fs::OpenOptions::new()
        .create(true)
        .writeable()
        .open("/output.txt")
    {
        Err(e) => println!("Error opening /output.txt: {:?}", e),
        Ok(_) => {} // file will be dropped if we reach here
    };
    let dir = match fs::OpenOptions::new().create(true).writeable().open("docs") {
        Err(e) => println!("Error opening docs: {:?}", e),
        Ok(_) => {} // directory will be dropped if we reach here
    };
    match fs::OpenOptions::new()
        .create(true)
        .writeable()
        .open("/docs")
    {
        Err(e) => println!("Error opening /docs: {:?}", e),
        Ok(_) => {} // directory will be dropped if we reach here
    };
}
