const fs = require("fs").promises;

async function main() {
  try {
    await fs.rename("input.txt", "output.txt");
    await fs.rename("docs", "mydocs");
    await fs.rename("/input.txt", "/output.txt");
    await fs.rename("/docs", "/mydocs");
  } catch (err) {
    console.error(`File move error: ${err}`);
  }
}

main();
