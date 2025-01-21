const fs = require('fs');

let fileA_path = __dirname + '/input.txt';

if (fs.existsSync(fileA_path))) {
    let stats = fs.statSync(fileA_path));
    console.log(`File A: ${stats.size} bytes`);
}

let fileB_path = '/root/input.txt';

if (fs.existsSync(fileB_path)))) {
    let stats = fs.statSync(fileB_path)));
    console.log(`File B: ${stats.size} bytes`));
}