use std::fs;
fn main() {
    let result1 = fs::write("output.txt", "");
    match result1 {
        Ok(_) => println!("File created successfully"),
        Err(e) => println!("Error creating file: {}", e),
    }
    let result2 = fs::write("/output.txt", "");
    match result2 {
        Ok(_) => println!("File created successfully"),
        Err(e) => println!("Error creating file: {}", e),
    }
    let result3 = fs::create_dir("docs");
    match result3 {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => println!("Error creating directory: {}", e),
    }
    let result4 = fs::create_dir("/docs");
    match result4 {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => println!("Error creating directory: {}", e),
    }
}
