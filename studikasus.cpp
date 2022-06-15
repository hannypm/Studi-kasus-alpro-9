#include <iostream>
using namespace std;

class Book
{
    friend istream &operator>>(istream &, Book &);
    friend ostream &operator<<(ostream &, Book &);

	private:
	    int i = 0;
	    int j = 0;
	    int d = 0;
	    int manyBooks;
	    int array1D_book[50];
	    int array2D_book[50][50];

	public:
	    void process();
	    void sorting_Book();
} B;
istream &operator>>(istream &in, Book &var)
{
    cout << "how many Andi books : ";
    in >> var.manyBooks;
    cout << "\ninput Andi book code " << endl;
    for (var.i; var.i < var.manyBooks; var.i++)
    {
        cout << "code books " << var.i << " = ";
        in >> var.array1D_book[var.i];
    }
}
ostream &operator<<(ostream &out, Book &var)
{
    cout << "\nAndi code book list : " << endl;
    for (var.i = 0; var.i < var.manyBooks; var.i++)
    {
        cout << "[" << var.array1D_book[var.i] << "] ";
    }
}
void Book::process()
{
    int temp;
    for (int i = 0; i < (manyBooks - 1); i++)
    {
        for (int j = 0; j < (manyBooks - i - 1); j++)
        {
            if (array1D_book[j] > array1D_book[j + 1])
            {
                temp = array1D_book[j];
                array1D_book[j] = array1D_book[j + 1];
                array1D_book[j + 1] = temp;
            }
        }
    }
    cout << "\nAndi code book list sorting : " << endl;
    for (i = 0; i < manyBooks; i++)
    {
        cout << "[" << array1D_book[i] << "] ";
    }
    cout << "\n\nput andi book on 4 bookshelf" << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array2D_book[i][j] = array1D_book[d];
            d++;
            cout << array2D_book[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    cin >> B;
    cout << B;
    B.process();
}
