public class StoryBook extends Book
{
	String category;
	StoryBook()
	{
		System.out.println("Default constructor of StoryBook");
	}
	StoryBook(String isbn, String bookTitle, String authorName, double price, int availableQuantity, String category)
	{
		super(isbn,bookTitle,authorName,price,availableQuantity);
		this.category=category;
		System.out.println("Valued constructor of StoryBook");
	}
	public void setCategory(String category)
	{
		this.category=category;
	}
	public String getCategory()
	{
		return category;
	}
	public void showDetails()
	{
		System.out.println(">>>>>Information about the StoryBook<<<<<");
		super.showDetails();
		System.out.println("Category: "+this.category);
	}
}
		
		