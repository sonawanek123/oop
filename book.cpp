#include <iostream>

using namespace std;
class Book
{
  public:
    int price, stock;
    string title, author, publisher;
    void accpet()
    {
        cout << "Enter the title:-";
        cin >> title;
        cout << "Enter the author:-";
        cin >> author;
        cout << "Enter the publisher:-";
        cin >> publisher;
        cout << "Enter the price:-";
        cin >> price;
        cout << "Enter the stock:-";
        cin >> stock;
    }
    void display()
    {
        cout << title << "\t" << author << "\t" << publisher << "\t" << price << "\t" << stock << "\n";
    }
};
int main()
{
    Book b[10];
    int i, ch, count = 0, n;
    do
    {
        cout << "\nMenu\n1)Accpet\n2)Display\n3)GetBook\n4)Exit..\nEnter the choice:-";
        cin >> ch;
        switch (ch)
        {
        case 1:

            cout << "Enter the slot:-"<<endl;
            cin >> n;
            for (i = count; i < count + n; i++)
            {
                b[i].accpet();
            }
            count += n;
            break;
        case 2:
            cout << "Title\tAuthor\tPublisher\tPrice\tStock"<<endl;
            for (i = 0; i < count; i++)
            {
                b[i].display();
            }
            break;
        case 3:
            int copy;
            
            string t, c;
            cout << "Enter the title:-"<<endl;
            cin >> t;
            cout << "Enter the author:-"<<endl;
            cin >> c;
            bool find=false;
            for (i = 0; i < count; i++)
            {
                if (t == b[i].title && c == b[i].author)
                {
                    find=true;
                    cout << "Book are Available "<<endl;
                    cout << "Stock Available :" << b[i].stock<<endl;
                    cout << "How many copy want you:-"<<endl;
                    cin >> copy;
                    if (copy <= b[i].stock)
                    {
                        cout << "Price" << b[i].price * copy;
                        b[i].stock -= copy;
                    }
                    else
                    {
                        cout << "given copy out of stock"<<endl;
                        break;
                    }
                }
                
                if(!find)
                {
                    cout << "Book are not Available"<<endl;
                    
                }
            }
        }
    } while (ch != 4);

    return 0;
}
