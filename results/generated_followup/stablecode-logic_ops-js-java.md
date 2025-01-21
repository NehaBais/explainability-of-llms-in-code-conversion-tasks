The error is due to missing semicolons at the end of each System.out.println statement. 

Fix: Add semicolons after each System.out.println statement.

Corrected code:
```java
public class LogicOperation {

    public static void main(String[] args) {
        
        logic(true, false);
        }

    static void logic(boolean a, boolean b){
        
        System.out.println("a AND b: " + (a && b)));
        System.out.println("a OR b: " + (a || b))));
        System.out.println("NOT a: " + (!a))));
    }
}
```
