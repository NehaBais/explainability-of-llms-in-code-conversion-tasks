// Converted code in JavaScript
const fs = require("fs");

async function main() {
  // Rename "input.txt" to "output.txt" in the current working directory
  await fs.rename("input.txt", "output.txt");

  // Rename "docs" to "mydocs" in the current working directory
  await fs.rename("docs", "mydocs");

  // Rename "/input.txt" to "/output.txt" in the file system root
  await fs.rename("/input.txt", "/output.txt");

  // Rename "/docs" to "/mydocs" in the file system root
  await fs.rename("/docs", "/mydocs");
}

main();
