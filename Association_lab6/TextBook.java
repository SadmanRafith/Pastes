public class TextBook extends Book
{
	int standard;
	TextBook()
	{
		System.out.println("Default constructor of TextBook");
	}
	TextBook(String isbn, String bookTitle, String authorName, double price, int availableQuantity, int standard)
	{
		super(isbn,bookTitle,authorName,price,availableQuantity);
		this.standard=standard;
		System.out.println("Valued constructor of TextBook");
	}
	public void setStandard(int standard)
	{
		this.standard=standard;
	}
	public int getStandard()
	{
		return standard;
	}
	public void showDetails()
	{
		System.out.println(">>>>>Information about the TextBook<<<<<");
		super.showDetails();
		System.out.println("Standard: "+this.standard);
	}
}
		
		