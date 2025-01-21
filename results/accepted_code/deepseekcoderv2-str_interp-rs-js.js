function main() {
  console.log("Mary had a %s lamb", "little");
  // You can specify order
  console.log("%s had a %s lamb", "Mary", "little");
  // Or named arguments if you prefer
  let adj = "little";
  let name = "Mary";
  console.log(`${name} had a ${adj} lamb`);
}

main();
