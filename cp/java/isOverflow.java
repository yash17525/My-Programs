import java.util.*;
import java.lang.*;/* this package is imported by default.
so need need to import manually.
*/
class overflow{
  public static boolean isoverflow(long a,long b){
    long result=a*b;
    if(a==0 || b==0)
    return false;
    else if(a== result/b)
    return false;
    else
    return true;
  }

  public  static void main(String[] args) {
    long a=Long.parseLong("100000000000");
     l   ong b=Long.parseLong("10000000000");
    if(isoverflow(a,b))
    System.out.println("overflow");
    else
    System.out.println(" no overflow");
  }
}
