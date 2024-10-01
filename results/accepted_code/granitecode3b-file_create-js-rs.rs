use std::fs;
fn main() -> Result<(), Box<dyn std::error::Error>> {
    let output_txt = "output.txt";
    let output_txt_path = "./".to_string() + output_txt;
    fs::write(output_txt_path, "")?;

    let docs_dir = "docs";
    let docs_dir_path = "/".to_string() + docs_dir;
    fs::create_dir(docs_dir_path)?;

    Ok(())
}
