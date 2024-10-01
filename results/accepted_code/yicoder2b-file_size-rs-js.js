const { env } = require("process");
const fs = require("fs").promises;

async function main() {
  const fileName = env.HOME || "";
  try {
    let stats = await fs.lstat(fileName);
    console.log(`Size of ${fileName} is ${stats.size} bytes`);
  } catch (error) {
    if (error.code === "ENOENT")
      console.error(`Error: ${fileName} does not exist`);
    else console.error("Error occurred", error);
    process.exit(2);
  }
}
main().catch((error) => console.error(`Error:`, error));
