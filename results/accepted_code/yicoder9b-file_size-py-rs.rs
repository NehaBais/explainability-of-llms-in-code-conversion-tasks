use std::fs::metadata;
use std::path::Path;

fn main() -> Result<(), std::io::Error> {
    let path1 = Path::new("input.txt");
    let meta1 = metadata(&path1)?;
    println!("Size of input.txt: {}", meta1.len());

    // Note that getting the size of a file at root level is OS-dependent and not portable.
    // Here it's done for Unix-like systems (not including Windows):
    #[cfg(unix)]
    {
        let path2 = Path::new("/input.txt");
        let meta2 = metadata(&path2)?;
        println!("Size of /input.txt: {}", meta2.len());
    }

    Ok(())
}
