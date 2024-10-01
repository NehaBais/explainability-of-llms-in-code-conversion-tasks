const fs = require("fs");
function main() {
  // Create file "output.txt" with size 0 bytes
  const fd = fs.openSync("output.txt", "w", (err, data) => {
    if (err) {
      console.log(err);
    }
  });

  // Close the file descriptor
  fs.closeSync(fd);

  // Create directory "docs" with permissions 0750 (rwxr-x---)
  fs.mkdirSync("docs", { mode: 0o750 });
}
