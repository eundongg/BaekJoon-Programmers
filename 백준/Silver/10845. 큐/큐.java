import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        LinkedList<Integer> queue = new LinkedList<>();
        
        StringBuilder sb = new StringBuilder();
        while(testCase>0){            
            StringTokenizer st = new StringTokenizer(br.readLine());
            
            String command = st.nextToken();            
            
            if(command.equals("push")){
                int num = Integer.parseInt(st.nextToken());
                queue.add(num);
            }else if(command.equals("pop")){
                if(queue.size()==0){
                    sb.append(-1).append("\n");
                }else{
                    sb.append(queue.poll()).append("\n");
                }
            }else if(command.equals("size")){
                sb.append(queue.size()).append("\n");                
            }
            else if(command.equals("empty")){
                if(queue.isEmpty()){
                    sb.append(1).append("\n");
                }else{
                    sb.append(0).append("\n");
                }
            }
            else if(command.equals("front")){
                if(queue.isEmpty()){
                    sb.append(-1).append("\n");
                }else{
                    sb.append(queue.peek()).append("\n");
                }
            }else if(command.equals("back")){
                if(queue.isEmpty()){
                    sb.append(-1).append("\n");
                }else{
                    sb.append(queue.getLast()).append("\n");
                }
            }
            
            testCase--;
        }
        System.out.print(sb);
    }
}