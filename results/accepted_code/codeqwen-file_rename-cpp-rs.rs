use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // Rename files and directories in the current working directory
    let here_input = "input.txt";
    let here_output = "output.txt";
    let here_docs = "docs";
    let here_mydocs = "mydocs";

    fs::rename(here_input, here_output)?;
    fs::rename(here_docs, here_mydocs)?;

    // Rename files and directories in the root directory
    let root_input = "/input.txt";
    let root_output = "/output.txt";
    let root_docs = "/docs";
    let root_mydocs = "/mydocs";

    #[cfg(target_os = "windows")]
    {
        fs::rename(root_input, root_output)?;
        fs::rename(root_docs, root_mydocs)?;
    }
    #[cfg(not(target_os = "windows"))]
    {
        println!("Renaming files and directories in the root directory is not supported on non-Windows systems.");
    }

    Ok(())
}
