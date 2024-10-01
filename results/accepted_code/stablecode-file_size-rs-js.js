const fs = require('fs');
const { exit } = process;

function main() {
  const fileName = process.argv[2] || 'input.txt';

  try {
    const metadata = fs.statSync(fileName));

    console.log(`Size of file.txt is ${metadata.size}} bytes`);
  } catch (err) {
    if (err.code === 'ENOENT') {
      console.error('"{}" not found in the current working directory or the root directory.', fileName);
    } else if (err.code === 'EACCES') {
      console.error('Permission denied for user ${process.env.USER}}.')
    }

    exit(2);
  }
}

main();