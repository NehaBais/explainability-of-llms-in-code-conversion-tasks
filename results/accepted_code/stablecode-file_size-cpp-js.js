const fs = require('fs');

function printFileSize(filename) {
    try {
        let size = fs.promises.stat(filename).then(stats => stats.size());

        console.log(`Size of file ${filename}} is ${size} bytes.`);
    } catch (ex) {
        console.error(`${ex.message}.`));
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');