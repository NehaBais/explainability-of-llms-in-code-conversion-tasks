extern crate super::fs; // This will be able to call the filesystem methods on fs crate (or standard library)

fn main() {
    let err = "File move error";
    // Get current directory path and change into root, if possible.
    if let Some(root_path) = getenv("HOME"){
        if let Ok(_) = std::fs::set_current_dir(root_path) {
            match (fs::rename("input.txt", "output.txt"), 
                   fs::rename("docs", "mydocs")){
                Ok((src1, dst1)) => println!("Successfully renamed {} to {}", src1, dst1),
                Err(_e) => (),
            }?;
        } else {
            println!("Cannot change directories.");
        }
    }else{
        println!("Cannot find HOME environment variable. Cannot proceed to the root directory.");
    }
}