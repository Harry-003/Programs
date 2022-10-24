import java.util.*;  
public class LinkedList{  
 public static void main(String args[]){  
 LinkedList<String> ll=new LinkedList<String>();  
           System.out.println("list of the elements: "+ll);  
           ll.add("Paba");  
           ll.add("Sarani");  
           ll.add("Aqee");  
           System.out.println("Then: "+ll);  
           //Adding an element at the specific position  
           ll.add(1, "Maya");  
           System.out.println("Then: "+ll);  
           LinkedList<String> ll2=new LinkedList<String>();  
           ll2.add("chala");  
           ll2.add("kavi");  
           
           ll.addAll(ll2);  
           System.out.println("Then: "+ll);  
           LinkedList<String> ll3=new LinkedList<String>();  
           ll3.add("Gayan");  
           ll3.add("Gamage");  
           //Adding second list elements to the first list at specific position  
           ll.addAll(1, ll3);  
           System.out.println("Then: "+ll);  
           //Adding an element at the first position  
           ll.addFirst("Lashesh");  
           System.out.println("Then: "+ll);  
           //Adding an element at the last position  
           ll.addLast("Harish");  
           System.out.println("Then: "+ll);  
             
 }  
} 
