The following is the required format of output for testing:

> a and b: True  
a or b: False  
not a: False  
> 

**Input:** First line should contain value of 'a' in boolean form, second line contains value of 'b' in boolean form.

## Input Format
The first two lines each containing single integer values that denote logical (boolean) values for the variables 'a' and 'b'.

## Constraints
None

## Output Format
The output should contain three lines with True or False denoting the output of given expression in order - 'a and b', 'a or b', not a'.

Sample Input 0  
True  
False  

Sample Output 0  
a and b: True  
a or b: True  
not a: False  

Explanation 0  
Output is in order mentioned.

## Source Code
```python3
# Enter your code here. Read input from STDIN. Print output to STDOUT
def logic(a,b):
    print('a and b:',a and b)
    print('a or b:',a or b)
    print('not a:',not a)
    
logic(*map(lambda x: bool(int(x)),input().split()))
```
