import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                
        while(true){
            String num  = br.readLine();            
            if(num.equals("0")){
                break;
            }
            StringBuilder sb = new StringBuilder(num);
            String revNum = sb.reverse().toString();
            if(num.equals(revNum)){
                System.out.println("yes");
            }else{
                System.out.println("no");
            }
        }
    }
}