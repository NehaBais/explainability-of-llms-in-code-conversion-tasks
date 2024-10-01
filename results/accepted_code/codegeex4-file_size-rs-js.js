const fs = require("fs");

function main() {
  const args = process.argv.slice(2);
  if (args.length === 0) {
    console.error("No file name supplied");
    process.exit(1);
  }

  let fileName = args[0];
  try {
    const stats = fs.statSync(fileName);
    console.log(`Size of ${fileName} is ${stats.size} bytes`);
  } catch (e) {
    console.error(e);
    process.exit(2);
  }
}

main();
