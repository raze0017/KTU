import java.util.*;
public class primenumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int flag=0;
        System.out.println("Enter a number");
        int n=sc.nextInt();
        for(int i=2;i<Math.sqrt(n);i++){
            if(n%2==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            System.out.println("Not ptime");
        }
        else{
            System.out.println("Prime");
        }
    }
}
