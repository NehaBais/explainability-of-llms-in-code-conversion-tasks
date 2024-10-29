Here is the JavaScript version of your Go code:

```javascript
function match(first, second) {
    console.log('1. ' + first + ' starts with ' + second + ': ' + first.startsWith(second));
    
    let i = first.indexOf(second);
    console.log('2. ' + first + ' contains ' + second + ': ' + (i >= 0));
    if (i >= 0) {
        console.log('2.1. at location ' + i);
        
        for(let start = i+1; ; ){
            let indexOfSecondInRest = first.slice(start).indexOf(second);
            
            if(indexOfSecondInRest < 0){
                break;
            } 
            
            console.log('2.2. at location ' + (start + indexOfSecondInRest));
            start += indexOfSecondInRest+1;
        }
        
        console.log("2.2. and that's all");
    }
    
    console.log('3. ' + first + ' ends with ' + second + ': ' + first.endsWith(second));
}

match("abracadabra", "abr");
```
This JavaScript code does exactly what the Go version of your code did:
1. It checks if the `first` string starts with `second` using the built-in `startsWith()` method in JavaScript.
2. It finds all occurrences of `second` in `first`, similar to how it would do in Python. This is done by finding the index (location) where `second` begins within `first` and then searching for further occurrences within the rest of `first` starting from that location onward.
3. It checks if the `first` string ends with `second` using the built-in `endsWith()` method in JavaScript.

