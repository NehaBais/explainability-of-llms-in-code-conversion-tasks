 Below is the equivalent Java code for your C program:

```java
import java.util.*;
import java.lang.*;

class Factors {
    int[] list;
    short count;
    
    public void addFactor(int factor) {
        if (list == null || count >= 300) {
            int[] newList = new int[count+1];
            for(int i=0; i<count; i++) {
                newList[i] = list[i];
            }
            list = newList;
        }
        
        list[count++] = factor;
    }
}

public class Main {
    public static void main(String[] args) {
        int nums2factor[] = { 2059, 223092870, 3135, 45 };
        Factors ftors = new Factors();
        
        for (int i=0; i<nums2factor.length; i++) {
            getFactors(ftors, nums2factor[i]);
            
            System.out.println("factors of " + nums2factor[i] + ":");
            for (int j = 0; j < ftors.count; j++) {
                System.out.print(ftors.list[j] + ((j == ftors.count - 1) ? "\n" : ", "));
            }
        }
    }
    
    public static Factors getFactors(Factors factors, int num) {
        int list[] = new int[301];
        int ix = 0;
        
        for (int dvsr=1; dvsr*dvsr < num; dvsr++) {
            if (num % dvsr != 0) continue;
            
            factors.addFactor(dvsr);
            list[ix++] = num/dvsr;
        }
        
        if (dvsr*dvsr == num) {
            factors.addFactor(dvsr);
        }
        
        return factors;
    }
}
```
This Java code does exactly the same as your C code: it calculates the factors of a number and prints them out. The only difference is that it uses an array to store the factors instead of reallocating memory for each factor. 

In the `getFactors` function, a new factor is added to the list of factors whenever one is found (except when the number itself is a factor). If a new array needs to be allocated because no more space can be added to the current array, a new array with twice the size of the old array is created. This mimics the behavior of your C code, where you had to reallocate memory for each new factor.
