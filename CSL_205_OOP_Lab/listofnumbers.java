import java.util.*;
class listofnumbers{
    public static void main(String[] args) { 
        Scanner sc=new Scanner(System.in);
        int i;
        System.out.println("Enter the numbers");
        int n[]=new int[10];
        for(i=0;i<10;i++){
          n[i]=sc.nextInt();
        }
        System.out.println("odd numbers are");{
            for(i=0;i<10;i++){
                if(n[i]%2!=0){
                    System.out.println(n[i]);
                }        
              }
        }
        System.out.println("Even numbers are");{
            for(i=0;i<10;i++){
                if(n[i]%2==0){
                    System.out.println(n[i]);
                }        
              }
        }
    }
    
}