function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);
  let i = first.indexOf(second);
  console.log(`2. ${first} contains ${second}: ${i !== -1}`);
  if (i !== -1) {
    console.log(`2.1. at location ${i}`);
    while (true) {
      i = first.indexOf(second, i + 1);
      if (i === -1) break;
      console.log(`2.2. at location ${i}`);
    }
  }
  console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}

match("abracadabra", "abr");
