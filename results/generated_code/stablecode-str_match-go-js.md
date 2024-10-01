Here is the equivalent JavaScript code for your GoLang code:

```javascript
function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);

  let index = first.indexOf(second);

  console.log(`2. ${first} contains ${second}: ${index >= 0 ? true : false}`);

  if (index >= 0) {
    console.log(`2.1. at location ${index},`));
    let i = index + second.length;
    while(i < first.length && first[i] === second[0]) {
      console.log(`2.2. at location ${i}},`));
      i++;
    }
  }

  console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}

match("abracadabra", "abr");
```

This JavaScript code performs the same operations as your provided GoLang code. 

The function `match(first, second)` takes two string arguments: `first` and `second`. 

It first checks if the `first` string starts with the `second` string using the `startsWith()` method.

Then, it searches for the `second` string in the `first` string using the `indexOf()` method.

If a match is found, the function then iterates from the location of the first occurrence to the end of the `first` string. In each iteration, it checks if the `second` string appears at the beginning of the substring of `first` starting at the current index plus the length of `second`.

Finally, it checks if the `first` string ends with the `second` string using the `endsWith()` method.
