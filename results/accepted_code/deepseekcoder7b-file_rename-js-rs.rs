use std::fs;

fn main() -> std::io::Result<()> {
    // Moving file "input.txt" to "output.txt" in the current directory
    fs::rename("input.txt", "output.txt")?;

    // Moving folder "docs" to "mydocs" in the current directory
    fs::rename("docs", "mydocs")?;

    // Moving file "c:/input.txt" to "c:/output.txt" at root of filesystem
    let path_to_root = "/";
    fs::rename(
        &format!("{}/input.txt", path_to_root),
        &format!("{}/output.txt", path_to_root),
    )?;

    // Moving folder "c:/docs" to "c:/mydocs" at root of filesystem
    fs::rename(
        &format!("{}/docs", path_to_root),
        &format!("{}/mydocs", path_to_root),
    )?;

    Ok(())
}
