function main() {
  console.log(`Mary had a ${"little"} lamb`);

  // You can specify order
  console.log(`${1} had a ${0} lamb`);

  // Or named arguments if you prefer
  console.log(`${name} had a ${adj} lamb`, (adj = "little"), (name = "Mary"));
}
