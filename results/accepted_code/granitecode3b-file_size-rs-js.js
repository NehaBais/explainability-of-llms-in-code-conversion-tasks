const fs = require("fs");
const path = require("path");

function exitErr(msg, code) {
  console.error(`Error: ${msg}`);
  process.exit(code);
}

try {
  const fileName = process.argv[2];
  const filePath = path.join(__dirname, fileName);
  const metadata = fs.statSync(filePath);
  console.log(`Size of ${fileName} is ${metadata.size} bytes`);
} catch (err) {
  exitErr(err.message, 1);
}
