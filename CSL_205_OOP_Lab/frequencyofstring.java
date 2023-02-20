import java.util.*;
class frequencyofstring{
    public static void main(String[] args) {
        int count=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter aa string");
        String str=sc.nextLine();
        System.out.println("Enter a character");
        char ch=sc.next().charAt(0);
        for (int i = 0; i < str.length(); i++) {
            if(str.charAt(i)==ch){
                count++;
            }
            
        }
        System.out.println("The count is"+count);
    }
}