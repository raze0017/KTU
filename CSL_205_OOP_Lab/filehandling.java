import java.io.*;
import java.util.*;

public class filehandling {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string");
        String str=sc.nextLine();
        try{
            BufferedWriter writer=new BufferedWriter(new FileWriter("output.txt"));
            writer.write(str); // corrected from input to str
            writer.close();
        }catch (IOException e){
            System.out.println("an error occured"+e.getMessage());
        }
        try{
            BufferedReader reader=new BufferedReader(new FileReader("output.txt"));
            String line=reader.readLine();
            while(line!=null){
                System.out.println(line);
                line=reader.readLine();
            }
            reader.close();
        }catch (IOException e){
            System.out.println("error occured while reading"+e.getMessage());
        }
    }
}
