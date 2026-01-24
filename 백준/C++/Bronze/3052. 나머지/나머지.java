import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int total=0;
		int[] arr = new int[1001];
		for(int i=0;i<10;i++) {
			int num = sc.nextInt();
			int mode = num%42;	
			arr[mode]++;
			if(arr[mode]==1) total++;
			else continue;
		}
		
		System.out.print(total);
		
		
	}
}