import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        int[] arr = new int[testCase];
        //ArrayList<Integer> list = new ArrayList<>();
        
        for(int i=0;i<testCase;i++){
            //list.add(Integer.parseInt(br.readLine()));
            arr[i] = Integer.parseInt(br.readLine());
        }
        Arrays.sort(arr);

        StringBuilder sb = new StringBuilder();
        for(int value : arr){
            sb.append(value).append("\n");
        }
        
        System.out.print(sb);
        
    }
}