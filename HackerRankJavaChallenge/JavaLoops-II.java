import java.util.*;
import java.io.*;

class Main{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int temp=0; 
             for(int j=0; j<n; j++){
                temp += a+((int)Math.pow(2,j))*b; 
                System.out.print(temp+" ");
             }
             System.out.println(); 
        }
        in.close();
    }
}
