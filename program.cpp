#include <iostream>
#include <string>

using namespace std;

int MAX = 3;
string stack[3];
int top = -1;

/* Cek jika stack sedang penuh */
bool isfull() {
    if (top == MAX - 1)
        return true;
    else
        return false;
}

/* Cek jika stack sedang kosong */
bool isempty() {
    if (top == -1)
        return true;
    else
        return false;
}

/* Fungsi untuk memasukkan elemen ke stack */
void push(string data) {
    if (!isfull()) {
        top = top + 1;
        stack[top] = data;
    }
    else
        cout << "Tidak dapat mamasukkan data, stack sedang penuh.\n";
}

/* Fungsi untuk menghapus elemen dalam stack */
string pop() {
    string data = "";
    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
    }
    else 
        cout << "Tidak dapat mengambil data, stack sedang kosong.\n";
    return data;
}

/* Fungsi peek dalam stack */
string peek() {
    string data = "";
    if (!isempty())
        data = stack[top];
    else
        cout << "Operasi tidak dapat dilakukan, stack kosong.\n";
    return data;
}

/* Menampilkan isi stack */
void display() {
    int i;
    for (i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

/* Fungsi utama */
int main()
{
    string val;
    push("Anggur");
    push("Mangga");
    push("Nanas");
    push("Pepaya");
    display();

    val = pop();
    display();

    val = peek();
    display();

    return 0;
}