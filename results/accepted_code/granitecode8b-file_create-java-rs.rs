use std::fs;
use std::io;
fn main() {
    let result1 = fs::File::create("output.txt");
    match result1 {
        Ok(_) => println!("File created successfully!"),
        Err(why) => println!("Error creating file: {}", why),
    }
    let result2 = fs::File::create("/output.txt");
    match result2 {
        Ok(_) => println!("File created successfully!"),
        Err(why) => println!("Error creating file: {}", why),
    }
    let result3 = fs::create_dir("docs");
    match result3 {
        Ok(_) => println!("Directory created successfully!"),
        Err(why) => println!("Error creating directory: {}", why),
    }
    let result4 = fs::create_dir("/docs");
    match result4 {
        Ok(_) => println!("Directory created successfully!"),
        Err(why) => println!("Error creating directory: {}", why),
    }
}
