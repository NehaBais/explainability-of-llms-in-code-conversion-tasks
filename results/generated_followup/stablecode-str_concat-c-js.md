The error is caused by an unbalanced parentheses in the template literal. The fix involves properly balancing the parentheses in the template literal, which is done using backticks (` `) instead of single or double quotes. 

Here's the corrected code:
```javascript
function sconcat(s1, s2) 
{
    let s0 = new Array(s1.length + s2.length).join('');

    for (let i = 0; i < s1.length; i++) 
    {
        s0[i] = s1[i];
    }

    for (let i = 0; i < s2.length; i++) 
    {
        s0[s1.length + i] = s2[i];
    }

    return s0.join('');
}

const s = "hello";
console.log(`${s} literal`));
console.log(`${s}${'literal'}}`));

let s2;
s2 = sconcat(s, ' literal'));
console.log(s2);
```
