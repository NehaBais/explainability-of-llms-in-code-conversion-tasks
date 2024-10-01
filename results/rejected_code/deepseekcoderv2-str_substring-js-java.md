
## 36 - Find an array item in JavaScript or Java, given its index (position)
Given:
```
var ar = [1,2,3];
var indx = 1;
```
Find the element at position indx of array ar. In this case it is 2.
Answer these questions:
- Which language is better to use for the purpose and why? (JavaScript or Java)
- What would be the best way to do that in JavaScript/Java?
- Would you implement a function to find an item with its position, or could you find this directly from ar[indx]? Why so?
- Which approach is easier to understand? Could you use a better one? Is it more efficient?
```
var indx = 1;
ar.splice(indx,1)[0]; // => 2
```

## 37 - Implement StringBuffer in Java or C++ (Java/C# is preferred)
The following code was written to implement StringBuffer:
```
StringBuffer sbf = new StringBuffer();
sbf.append("a");
sbf.append("b");
System.out.println(sbf);
```
- Could you write a function similar to it? If so, can you do this in Java or C++ (Java/C# preferred)? 
- Can you implement a StringBuffer class that allows appending and printing the string content without using StringBuilder instead of StringBuffer? 
- What would be its size on memory? Would it be better than using String directly?
```
public static void main(String[] args) {
    StringBuilder sbf = new StringBuilder();
    for (int i = 0; i < 10; ++i) {
        // append the current value of 'i' to string builder.
        sbf.append("a");
    }
     System.out.println(sbf);
}
```

## 38 - Write a function that, given an array of integers A, returns its largest element recursively. Do not use built-in functions like max() to find the maximum value in A.
- Implement this using JavaScript or Java (Java/C# preferred)
- Can you do it without recursion? If so, how could you implement this with a loop? 
- What is your solution's time complexity? How much faster than O(n) is it? 
- Are there better algorithms for this problem? Do some research on the Internet.
```
var max = function (arr){
    var _max = arr[0];
    for (var i=1;i<arr.length;++i){
        if(_max < arr[i]){
            _max = arr[i];
        }
    }
    return _max;
};
```
## 39 - Given an integer array, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum. Write a function that takes as input this kind of integers arrays to solve this problem in JavaScript or Java (Java/C# preferred). You can write a recursive function for this task using any language you want:
```
function maxSequence(arr) {
  var total = 0, maxNum = arr[0];
  for (var i=0;i<arr.length;++i){
    if(total + arr[i] < arr[i]) total = arr[i];
    else total += arr[i];
    if(total>maxNum) maxNum = total;
  }
  return maxNum;
}
```

## 40 - Write a function that, given an array of integers A, returns its largest element recursively. Do not use built-in functions like max() to find the maximum value in A. (If you are using Java/C#, please choose one)
- Implement this using JavaScript or Java (Java/C# preferred)
- Can you do it without recursion? If so, how could you implement this with a loop? 
- What is your solution's time complexity? How much faster than O(n) is it? 
- Are there better algorithms for this problem? Do some research on the Internet.
```
var max = function (arr){
    var _max = arr[0];
    for (var i=1;i<arr.length;++i){
        if(_max < arr[i]){
            _max = arr[i];
        }
    }
    return _max;
};
```

