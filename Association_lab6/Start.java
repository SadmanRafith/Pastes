public class Start
{
	public static void main (String[]args)
	{
		Bookshop b1=new Bookshop ("BookStore");
		TextBook t1= new TextBook("10th Release","James Harden","Tony Zaret",300,20,8);
		if(b1.insertTextBook(t1))
		{
			System.out.println("TextBOOK 1 inserted");
		}
		else
		{
			System.out.println("TextBOOKs overflow");
		}
		
		TextBook t2= new TextBook("354554-a","James Harden","Tony Zaret",300,20,8);
		b1.insertTextBook(t2);
		StoryBook s1= new StoryBook("1st Edition","Huckleberry Finn","Charles Dickens",200,50,"Adventure");
		b1.insertStoryBook(s1);
		StoryBook s2= new StoryBook("10th Edition","Huckleberry Finn","Charles Dickens",200,50,"Adventure");
		b1.insertStoryBook(s2);
		StoryBook s3= new StoryBook("9th Edition","Huckleberry Finn","Charles Dickens",200,50,"Adventure");
		b1.insertStoryBook(s3);
		b1.showAllTextBooks();
		b1.showAllStoryBooks();
		if(b1.removeStoryBook(s3))
		{
			System.out.println("Removed");
		}
		else
		{
			System.out.println("No match found");
		}
		b1.searchTextBook("354554-a").showDetails();
		b1.showAllStoryBooks();
	}
}
