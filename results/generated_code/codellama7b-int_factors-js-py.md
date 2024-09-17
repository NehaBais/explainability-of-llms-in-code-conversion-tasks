To convert the JavaScript code to Python, you can use the following code:
```
def factors(num):
    n_factors = []
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num / i != i:
                n_factors.append(num / i)
    return sorted(n_factors, key=lambda x: x)
```
Here's a breakdown of the changes made to the code:

* In JavaScript, variables are declared using the `var` keyword followed by their name and type (if specified). In Python, variables are declared without any type annotation. Instead, you can simply assign a value to the variable when it is first used. So, in the above code, instead of declaring `n_factors` as a list using `var`, we create an empty list and then populate it with values.
* In JavaScript, functions are defined using the `function` keyword followed by their name and parameters (if any). In Python, functions are defined using the `def` keyword followed by their name and parameters (if any). The function body is enclosed in a block of code indented under the `def` keyword.
* In JavaScript, loops can be written using either a `for` loop or a `while` loop. In Python, loops are typically written using a `for` loop. The `range()` function in Python generates a sequence of numbers that can be used to iterate over the loop.
* In JavaScript, the `sort()` method is called on the list to sort it numerically. In Python, you can use the `sorted()` function with a key function to sort the list. The key function takes two arguments and returns a value that is used to determine the order of the elements in the sorted list.
* In JavaScript, the `Math.sqrt()` function is used to find the square root of a number. In Python, you can use the built-in `math.sqrt()` function to calculate the square root of a number.
* In JavaScript, the `return` statement is used to return the result of a function call. In Python, you can use the `return` statement to return the result of a function call.

Overall, the main difference between the two languages is that JavaScript is a dynamically-typed language and Python is a statically-typed language. Additionally, JavaScript has fewer built-in functions for mathematical operations than Python.
