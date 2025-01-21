The error `SyntaxError: Unexpected token ')` is occurring because of an incorrect closing bracket. The fix would be to replace the mismatched closing bracket at the end of the line with a proper closing curly brace (`}). 

Here's the corrected JavaScript code:
```js
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
```
