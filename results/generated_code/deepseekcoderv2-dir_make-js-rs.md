### Solution in Rust
```rust
use std::path::Path;
use std::fs;
fn mkdirp<P>(p: P) -> std::io::Result<()>
where
    P: AsRef<Path>,
{
    let p = path.resolve(p);
    fs.mkdir(p, function (er) {
        if (!er) {
            return cb(null);
        }
        switch (er.code) {
            case 'ENOENT':
                // The directory doesn't exist. Make its parent and try again.
                mkdirp(path.dirname(p), function (er) {
                    if (er) cb(er);
                    else mkdirp(p, cb);
                });
                break;

                // In the case of any other error, something is borked.
            default:
                cb(er);
                break;
        }
    })
}
```

