The error in a single line is: `';' expected`
This error occurs because Java requires semicolons at the end of lines, whereas Golang does not require this.

The fix for this issue involves adding semicolons at the end of each line where required by the Java syntax. 

Here's the corrected code in a single fenced code block:
```java
public class Main 
{

    public static void printLogic(boolean a, boolean b) 
    {
        System.out.println("a and b is " + (a && b)));
        System.out.println("a or b is " + (a || b)));
        System.out.println("not a is " + !a));
    }

    public static void main(String[] args) 
    {
        printLogic(true, false);
    }
}
```
This corrected code should now run without any errors when compiled in Java.
