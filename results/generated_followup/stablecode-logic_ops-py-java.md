The error in this Java code is due to missing semicolons (;) at the end of each statement inside the logic method. 

To fix this issue, we need to add semicolons after each statement. Here's the corrected code:

```java
public class Main {
    public static void main(String[] args) {
        logic(true, false);  // change the arguments as per your requirement
        }

        static void logic(boolean a, boolean b){
            System.out.println("a and b: " + (a && b)));
            System.out.println("a or b: " + (a || b)));
            System.out.println("not a: " + (!a)));
        }
}
```

Now, the code is free from syntax errors.
