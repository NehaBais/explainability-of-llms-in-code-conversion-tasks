function match(first, second) 
{
  console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);

  let index = first.indexOf(second);

  console.log(`2. ${first} contains ${second}: ${index >= 0 ? true : false}`);

  if (index >= 0) 
  {
    console.log(`2.1. at location ${index},`));
    let i = index + second.length;
    while(i < first.length && first[i] === second[0]) 
    {
      console.log(`2.2. at location ${i}},`));
      i++;
    }
  }

  console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}

match("abracadabra", "abr");