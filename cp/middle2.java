import java.util.*;

class Middle{
  public static int middleOfThree(int a,int b,int c){
    int x,y,z;
    x=a-b;
    y=b-c;
    z=c-a;
    if(x*y>0)
    return b;
    else if(x*z>0)
    return a;
    else
    return c;
  }

   public static void main(String[] args) {
     int a=10,b=20,c=30;
     System.out.println(middleOfThree(a,b,c));

  }
}
