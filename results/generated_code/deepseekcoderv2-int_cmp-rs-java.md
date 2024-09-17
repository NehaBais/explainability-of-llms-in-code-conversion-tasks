### Solution 1:
```java
import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
		// Your code here
	Scanner sc = new Scanner(System.in);
	int a=sc.nextInt();
	int b=sc.nextInt();
	if(a<b){
        System.out.println("Less than");}
	else if(a>b){
	    System.out.println("Greater than");}
	else{
	    System.out.println("Equal to");}
	}
}
```
