use std::fs;
use std::result::Result as RcResult;

fn main() -> RcResult<()> {
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;
    // The same applies for the lines below which will fail at compile time:
    //fs::rename("/input.txt", "/output.txt")?;
    //fs::rename("/docs",      "/mydocs")?;

    return Ok(());
}
