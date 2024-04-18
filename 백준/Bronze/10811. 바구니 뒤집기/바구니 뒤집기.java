import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n= sc.nextInt();
		int m = sc.nextInt();
		int[] arr = new int[n];
		
		for(int i=0;i<arr.length;i++) {
			arr[i] = i+1;
		}
		
		for(int i=0;i<m;i++) {
			int num1 = sc.nextInt();
			int num2 = sc.nextInt();
			
			
			while(true) {
				int tmp = arr[num1-1];
				arr[num1-1] = arr[num2-1];
				arr[num2-1] = tmp;
				num1++;
				num2--;
				if(num2<num1) break;
			}			
		}
		for(int num: arr) {
			System.out.println(num);
		}
	}
}
