package ds;

import java.util.Scanner;

public class Stack {
 
	
	 
	
	public static void main(String[] args) {
	
		int choice=0;
		Scanner s = new Scanner(System.in);
		StackFunctions sf= new StackFunctions();
		while(choice!=5)
		{
			System.out.println("1.PUSH\n2.POP\n3.SHOW\n4.PEAK");
			choice=s.nextInt();
			
			switch (choice) {
			case 1:
				sf.push();
				break;
			case 2:
				sf.pop();
				break;
			case 3:
				sf.show();
				break;
			case 4:
				sf.peak();
				break;	

			default:
				break;
			}
			
		}
	}

	
}
class StackFunctions
{
	Scanner s= new Scanner(System.in);
	 int size=5; 
	 int top=-1;
	int[] stack= new int[size];
	public void peak()
	{
		if(top==-1)
		{
			System.out.println("Stack is Empty");
		}
		else
		{
			System.out.println("top element is:-"+stack[top]);
		}
		
	
		
	}

	public void show()
	{
		if(top==-1)
		{
			System.out.println("Stack is empty");
			
		}
		else
		{
			System.out.println("Stack Elements");
			for (int i =top; i>=0; i--) {
				
				System.out.println(stack[i]);
			}
		}
		
	}

	public void pop() 
	{
		if(top==-1)
		{
			System.out.println("Stackis Undeflow");
		}
		else
		{
			top--;
			System.out.println("Element Pop from Stack");
		}
		
	}

	public void push() 
	{
		if(top==size-1)
		{
			System.out.println("Stack is overflow");
		}
		else
		{
			top++;
			System.out.println("Enter Element");
			stack[top]=s.nextInt();
			System.out.println("Element Push in stack");
		}
		
	}

	
}
