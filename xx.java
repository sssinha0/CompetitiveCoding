import java.util.Scanner;
public class xx {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int numOfPipes = scan.nextInt();
		//scan inputs
		int[] len = new int[numOfPipes];
		for(int i=0; i<numOfPipes; i++) {
			len[i] = scan.nextInt();
		}
		//print the first element of the array and consider it as a reference variable for comparing other elements
		System.out.print(len[0]+" ");
		int temp = len[0];
		//now we start iterating from index 1
		for(int i=1; i<numOfPipes; i++) {
			//if the ith element (right element) is less than the temp element (left element) then we display the element and set it as a reference element to compare the next right elements in the array
			if(len[i]<temp) {
				System.out.print(len[i]+" "); 
				temp = len[i];
			}
		}
	}
}