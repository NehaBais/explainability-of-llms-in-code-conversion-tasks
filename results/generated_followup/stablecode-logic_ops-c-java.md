The error is due to missing semicolons at the end of each line inside the printLogic function. The fix involves adding semicolons after each statement in order to close out the function properly. 

Here's the corrected Java code:
```java
public class Logic 
{
    public static void printLogic(boolean a, boolean b) 
    {
        System.out.println("a && b is " + (a && b)));
        System.out.println("a || b is " + (a || b)));
        System.out.println("not a is " + (!a)));
    }
}
```
This Java function `printLogic` takes two boolean values as input parameters, and then prints the result of 
- "and" between both arguments (`(a && b)`)),
- "or" between both arguments (`(a || b)`)),
- and "not" operation on the first argument (`(!a)`)). 

The corrected code ensures that all statements are properly closed with semicolons. This will prevent any compilation errors related to missing or unexpected semicolons.
