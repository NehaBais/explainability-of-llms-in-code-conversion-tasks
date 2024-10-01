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

    let root = match std::env::consts::DOCS()
        .strip_prefix('/')
        .map(|p| p.split_once(':'))
    {
        Some((root, _)) => Some(format!("/{}/docs", root)),
        None => None,
    };
    match root {
        Some(path) => {
            let input_txt = Path::new(&path).join("input.txt");
            println!(
                "Does /input.txt exist in filesystem root? {}",
                Path::exists(&input_txt)
            );

            let docs_dir = Path::new(&path).join("docs");
            println!(
                "Does '/docs' directory exist in filesystem root? {}",
                Path::exists(&docs_dir)
            );
        }
        None => println!("Failed to get the filesystem root path"),
    }
}
