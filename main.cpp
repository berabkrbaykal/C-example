#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
struct Book {
    char name[30];
    char author[20];
    int page;
    int qnty;
    int borrowed;
};

void findAuthor(Book a[],const char author[]);
void printAvailableBooks(Book a[]);
void findUsingPageNumber(Book a[], int n);
bool borrow(Book a[], const char bookName[]);
int countBooks(Book a[]);
void findAndPrintBook(Book a[],const char name[]);
void printBook(Book a[], int i);


int main() {
    Book b[10];
    for (int i=0;i<10;i++)
    {
        b[i].qnty = 10;
        b[i].borrowed = 0;
    }
    strcpy(b[0].name, "Suc ve Ceza");
    strcpy(b[0].author, "Dostoyevski");
    b[0].page = 500;
    strcpy(b[1].name, "Kumarbaz");
    strcpy(b[1].author, "Dostoyevski");
    b[1].page = 400;
    strcpy(b[2].name, "Savas ve Baris");
    strcpy(b[2].author, "Tolstoy");
    b[2].page = 450;
    strcpy(b[3].name, "Haci Murat");
    strcpy(b[3].author, "Tolstoy");
    b[3].page = 550;
    strcpy(b[4].name, "Vadideki Zambak");
    strcpy(b[4].author, "Balzac");
    b[4].page = 455;
    strcpy(b[5].name, "Sefiller");
    strcpy(b[5].author, "Hugo");
    b[5].page = 350;
    strcpy(b[6].name, "Yuzuklerin Efendisi");
    strcpy(b[6].author, "Tolkien");
    b[6].page = 1000;
    strcpy(b[7].name, "Hababam Sinifi");
    strcpy(b[7].author, "Rıfat Ilgaz");
    b[7].page = 333;
    strcpy(b[8].name, "Ana");
    strcpy(b[8].author, "Gorki");
    b[8].page = 387;
    strcpy(b[9].name, "Martin Eden");
    strcpy(b[9].author, "Jack London");
    b[9].page = 435;


    findAuthor(b,"HUGO");
    printAvailableBooks(b);
    findUsingPageNumber(b,500);
    for (int i=0;i<5;i++)
    {
        if(borrow(b,"suc ve ceza"))
            cout << "\n\nSuc ve Ceza is borrowed successfully.\n";
        else
            cout << "Suc ve Ceza cannot be borrowed.\n";
    }
    cout << "\n\nThere are " << countBooks(b) << " books available in the library!\n\n";
    findAndPrintBook(b,"sUC vE ceza");

    return 0;
}

void printBook(Book a[], int i) {
        cout << "Kitap ismi: " << a[i].name << endl;
        cout << "Kitap yazarı: " << a[i].author << endl;
        cout << "Kitap sayfa sayısı: " << a[i].page << endl;
}

void findAuthor(Book a[], const char author[]) {
    bool found = false;
    for (int i = 0; i < a->qnty; i++) {
        char upperAuthor[20];
        int j = 0;
        while (author[j]) {
            upperAuthor[j] = toupper(author[j]);
            j++;
        }
        upperAuthor[j] = '\0';


        char upperBookAuthor[20];
        j = 0;
        while (a[i].author[j]) {
            upperBookAuthor[j] = toupper(a[i].author[j]);
            j++;
        }
        upperBookAuthor[j] = '\0';

        if (strcmp(upperBookAuthor, upperAuthor) == 0) {
            printBook(a, i);
            found = true;
        }
    }
    if (!found) {
        cout << "Yazara ait kitap bulunamadı" << endl;
    }
}

void printAvailableBooks(Book a[]) {
    cout << "Ödünç verilebilecek kitaplar aşağıda listelenmiştir" << endl;
    for (int i=0; i < a->qnty; i++)
    {
        if (a[i].borrowed == 0)
            cout << "-" << a[i].name << endl;
    }

}

void findUsingPageNumber(Book a[], int n) {
    cout << n << " sayfadan az kitaplar listelenmiştir." << endl;
    for (int i=0;i<a->qnty;i++)
    {
        if(a[i].page < n)
            cout << "-"<< a[i].name << endl;
    }
}

bool borrow(Book a[], const char bookName[]) {
    // eğer borrowed değeri 1'e eşitse kitap ödünç verilmez
    if (a->borrowed == 0)
    {
        cout << bookName << " adlı kitap ödünç alınabilir." << endl;
        a->borrowed = 1;
    }
    else if (a->borrowed == 1)
        cout << "Kitap başka bir kullanıcıda olduğu için ödünç verilemez" << endl;
}

int countBooks(Book a[]) {
    int countOfBook = 0;
    for(int i=0; i < a->qnty; i++){
        if (a[i].borrowed == 0)
            countOfBook += 1;
    }
    cout << countOfBook;
}

void findAndPrintBook(Book a[], const char name[]) {
        if (a->name == name)
        {
            cout << "Kitap bilgileri aşağıda verilmiştir" << endl;
            cout << a->name << endl;
            cout << a->author << endl;
            cout << a->page << endl;
            if (a->borrowed == 0)
                cout << "Ödünç alınabilir";
            else
                cout << "Ödünç alınamaz";
        }
        else
            cout << "Girdiğiniz kitap ismi kütüphane listesinde herhangi bir kitapla uyuşmuyor." << endl;
}