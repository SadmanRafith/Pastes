import java.lang.*;

class Person{

	public String name;
    public int age;
	
	public Person (){}
	
	public Person (String name,int age){
		this.name=name;
		this.age=age;
	}
	
	public void setName(String name){
		this.name=name;
	}
	public void setAge(int age){
		this.age=age;
	}
	public String getName(){
		return name;
	}
	public int getAge(){
		return age;
	}
}

class Doctor extends Person{
	private String workingid;
	private String specialization;
	
	public Doctor()
	{
		
	}
	
	public Doctor(String name,int age,String workingid,String specialization){
		super(name,age);
		this.workingid=workingid;
		this.specialization=specialization;
	}
	
	public void setWorkingid(String workingid){
		this.workingid=workingid;
	}
	public void setSpecialization(String specialization){
		this.specialization=specialization;
	}
	
	public String getSpecialization(){
		return specialization;
	}
	
	public void showInfo(){
		System.out.println("\nShowing Details for Doctor");
		System.out.println("Working Id:"+workingid);
		System.out.println("Designation:"+specialization);
		System.out.println("Name:"+name);
		System.out.println("Age:"+age);
	}
}

public class MainActivity{

    public static void main (String [] args){

		    Doctor d1=new Doctor("Devi Shetty", 45,"1101-1","Executive Director");
		    d1.showInfo( );
	    }
}
