
### Solution 20: 
Here's my attempt at converting this to Java from JavaScript using Google's TypeScript compiler, and the following dependencies (see package.json for details) -
* https://github.com/DefinitelyTyped/DefinitelyTyped/blob/master/types/node/index.d.ts#L154-L179
* @types/node/fs.d.ts
* @types/node/path.d.ts
```
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
```
