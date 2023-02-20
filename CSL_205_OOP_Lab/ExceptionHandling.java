import java.io.Closeable;
import java.util.*;
class ageoverexception extends Exception{
    public ageoverexception(String str){
        System.out.println(str);
    }
}
public class ExceptionHandling {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter age");
        int age=sc.nextInt();
        sc.close();
        try{
            if(age<18){
                throw new ageoverexception("invalid");
            }else{
                System.out.println("valid");
            }
        }
        catch (ageoverexception a){
            System.out.println(a);
        }
    }
}
