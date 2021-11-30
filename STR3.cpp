#include<iostream>
#include<time.h>
#include<string>
using namespace std;
struct book
    {
        char name[20];
        char author[20];
        char publishing_house[20];
        char genre[20];
    };

void reduct(book* arr_books,int n){
    
    cout << "Ведите новое название книги: ";
    cin.getline(arr_books[n].name,20);

    cout << "Ведите нового автора книги: ";
    cin.getline(arr_books[n].author, 20);

    cout << "Ведите новое издательство книги: ";
    cin.getline(arr_books[n].publishing_house, 20);

    cout << "Ведите новый жанр книги: ";
    cin.getline(arr_books[n].genre, 20);  
    cout << endl;
}

void print_all_books(book* arr_books) {
    
    for (int i = 0; i < 10; i++){
        cout << "Книга "<<i+1<<": ";
        cout << arr_books[i].name << " " << arr_books[i].author << " " << arr_books[i].publishing_house << " " << arr_books[i].genre << endl;
    }

}
void poisk_po_avtoru(book* arr_books) {
    
    cout << "Ведите автора книги: \n";
    char temp_author;
    cin>>temp_author;
    for(int i = 0; i < 10; i++) {
        if (*arr_books[i].author == temp_author) {
            cout << "Ваша книга номер: " << i << endl;
        }
    }
}

void poisk_po_nazvaniju(book* arr_books) {
    cout << "Ведите название книги: \n";
    char temp_name;
    cin >> temp_name;
    for (int i = 0; i < 10; i++) {
        if (*arr_books[i].name == temp_name) {
            cout << "Ваша книга номер: " << i << endl;
        }
    }
}

void sort_po_avtoru(book* arr_books, int k) {
    int d;
    do
    {
        d = 0;
        for (int i = 0; i < k - 1; i++)
            if (strcmp(arr_books[i].name, arr_books[i + 1].name) > 0)
            {

                swap(arr_books[i], arr_books[i + 1]);
                d = 1;
            }
    } while (d);
}

void sort_po_nazvaniju(book* arr_books, int k) {
    int d;
    do
    {
        d = 0;
        for (int i = 0; i < k - 1; i++)
            if (strcmp(arr_books[i].author, arr_books[i + 1].author) > 0)
            {

                swap(arr_books[i], arr_books[i + 1]);
                d = 1;
            }
    } while (d);

}
void sort_po_izdatelstvu(book* arr_books, int k) {
    int d;
    do
    {
        d = 0;
        for (int i = 0; i < k - 1; i++)
            if (strcmp(arr_books[i].publishing_house, arr_books[i + 1].publishing_house) > 0)
            {

                swap(arr_books[i], arr_books[i + 1]);
                d = 1;
            }
    } while (d);

}

int main()
{   
    setlocale(LC_ALL, "russian");
    book book1 = { "mathem","ivanov","zarja","education" }; 
    book book2 = { "mathem2","ivanov","minsk","education" };
    book book3 = { "ruslit","petrov","brest","literature" }; 
    book book4 = { "ruslit2","petrov","minsk","literature" };
    book book5 = { "IT","sidoriv","neman","education" }; 
    book book6 = { "IT2","sidoriv","grodno","education" };
    book book7 = { "building","smirnov","piter","ingineer" }; 
    book book8 = { "pistolet2","sidoriv","mnm","detective" };
    book book9 = { "pistolet","smirnov","piter","detective" }; 
    book book10 = { "pistolet333","smirnov","piter","literature" };

    book arr_books[10] = { book1, book2, book3, book4, book5, book6, book7, book8, book9, book10 };
    
    cout << "Редактировать книгу-1\n";
    cout << "Печать всех книг-2\n";
    cout << "Поиск книг по автору-3\n";
    cout << "Поиск книги по названию-4\n";
    cout << "Сортировка массива по названию книг-5\n";
    cout << "Сортировка массива по автору-6\n";
    cout << "Сортировка массива по издательству-7\n\n";
    cout << "Введите номер\n\n";
    int number;
    cin >> number;
    switch (number) {
    case 1:
        cout << "Ведите номер редактируемой книги-";
        int numBook;
        cin >> numBook;
        switch (numBook) {
        case 1:reduct(arr_books,numBook - 1); break;
        case 2:reduct(arr_books, numBook - 1); break;
        case 3:reduct(arr_books, numBook - 1); break;
        case 4:reduct(arr_books, numBook - 1); break;
        case 5:reduct(arr_books, numBook - 1); break;
        case 6:reduct(arr_books, numBook - 1); break;
        case 7:reduct(arr_books, numBook - 1); break;
        case 8:reduct(arr_books, numBook - 1); break;
        case 9:reduct(arr_books, numBook - 1); break;
        case 10:reduct(arr_books, numBook - 1); break;
        default: break;
        }        
        break;
    case 2:print_all_books(arr_books); break;
    case 3:poisk_po_avtoru(arr_books); break;
    case 4:poisk_po_nazvaniju(arr_books); break;
    case 5:print_all_books(arr_books); cout << endl; sort_po_nazvaniju(arr_books, 10); print_all_books(arr_books); break;
    case 6:print_all_books(arr_books); cout << endl; sort_po_avtoru(arr_books,10); print_all_books(arr_books); break;
    case 7:print_all_books(arr_books); cout << endl; sort_po_izdatelstvu(arr_books, 10); print_all_books(arr_books); break;
    default: break;
    }     
    system("PAUSE >> VOID");
    return 0;
}
