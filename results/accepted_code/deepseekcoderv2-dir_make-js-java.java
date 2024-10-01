import * as path from "path";
import * as fs from 'fs';

export function mkdirp(input: string, cb: (err?: Error) => any): void {
    let resolved = path.resolve(input);
    fs.mkdir(resolved, (er) => {
        if (!er) { return cb(); }
        switch (er.code) {
            case 'ENOENT': // The directory doesn't exist. Make its parent and try again.
                mkdirp(path.dirname(resolved), er => er ? cb(er) : mkdirp(input, cb));
                break;
            default:
                cb(er);
        }
    });
}