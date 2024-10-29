const fs = require("fs").promises;

async function main() {
  const errMsg = "File move error";

  try {
    await fs.rename("input.txt", "output.txt");
    await fs.rename("docs", "mydocs");
    // For the root directory, use "/" as path prefix instead of "", or just specify it directly as "/output.txt" and "/mydocs".
    await fs.rename("/input.txt", "/output.txt");
    await fs.rename("/docs", "/mydocs");
  } catch (err) {
    console.error(errMsg);
  }
}
main();
