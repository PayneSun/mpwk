/**
 * Chapter 8
 * r8p11.java
 * 2017.04.26
 */


package chapter08;

public class r8p11 {

	public static void main(String[] args) {
		Circle circle1 = new Circle(1);
		Circle circle2 = new Circle(2);
		
		swap1(circle1, circle2);
		System.out.println("circle1 = " + circle1.radius + 
				" circle2 = " + circle2.radius);
		
		swap2(circle1, circle2);
		System.out.println("circle1 = " + circle1.radius + 
				" circle2 = " + circle2.radius);
	}
	
	public static void swap1(Circle x, Circle y) {
		Circle temp = x;
		x = y;
		y = temp;
	}
	
	public static void swap2(Circle x, Circle y) {
		double temp = x.radius;
		x.radius = y.radius;
		y.radius = temp;
	}
}	
	class Circle {
		double radius;
		Circle(double newRadius) {
			radius = newRadius;
		}
	}

