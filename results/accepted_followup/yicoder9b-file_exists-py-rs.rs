use std::path::Path;

fn main() {
    let cwd = std::env::current_dir();
    match cwd {
        Ok(path) => {
            let input_txt = path.join("input.txt");
            println!(
                "Does input.txt exist in current directory? {}",
                Path::exists(&input_txt)
            );

            let docs_dir = path.join("docs");
            println!(
                "Does 'docs' directory exist in current directory? {}",
                Path::exists(&docs_dir)
            );
        }
        Err(_) => println!("Failed to get the current working directory"),
    }

    // Assuming '/' is filesystem root. If it's not replace with correct root
    let root = "/";  
    {
        let input_txt = Path::new(&root).join("input.txt");
        println!(
            "Does /input.txt exist in filesystem root? {}",
            Path::exists(&input_txt)
        );

        let docs_dir = Path::new(&root).join("docs");
        println!(
            "Does '/docs' directory exist in filesystem root? {}",
            Path::exists(&docs_dir)
        );
    }  
}