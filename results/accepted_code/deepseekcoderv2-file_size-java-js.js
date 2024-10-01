import fs from "fs";
const { promisify } = require("util");

async function main() {
  const readFileAsync = promisify(fs.readFile);
  try {
    let inputData = await readFileAsync("input.txt", "utf8");
    console.log(`%,d B%n`, fileA.length());
  } catch (e) {
    console.error(e.message);
  }
}
main();
