import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                
        int testCase = Integer.parseInt(br.readLine());
        Stack<Integer> stack = new Stack<>();
        StringBuilder sb = new StringBuilder();
        
        while(testCase>0){
            StringTokenizer st = new StringTokenizer(br.readLine());
            String command = st.nextToken();
            if(command.equals("push")){
                int value = Integer.parseInt(st.nextToken());
                stack.push(value);
            }else if(command.equals("top")){
                if(stack.size() ==0){
                    sb.append(-1).append("\n");
                }else{
                    sb.append(stack.peek()).append("\n");
                }               
            }else if(command.equals("size")){
                sb.append(stack.size()).append("\n");
            }else if(command.equals("empty")){
                if(stack.isEmpty()){
                    sb.append(1).append("\n");
                }else{
                    sb.append(0).append("\n");
                }                  
            }else if(command.equals("pop")){
                if(stack.size() ==0){
                    sb.append(-1).append("\n");
                }else{                    
                    sb.append(stack.pop()).append("\n");
                }  
            }
            testCase--;
        }
        System.out.print(sb);
    }
}