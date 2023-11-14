#include <iostream>
#include <cstring>
#include <cctype>
#pragma warning(disable:4996)
using namespace std;
//Cho một chuỗi s chứa các ký tự chữ hoa, chữ thường và ký tự khoảng trắng.Giả sử s không có khoảng trắng đầu chuỗi, không có khoảng trắng cuối chuỗi, giữa các từ chỉ có một khoảng trắng.Các ký tự liền nhau gọi là một từ.
//
//Hãy viết các hàm thực hiện các công việc sau(ví dụ một số dạng) :
//
//    a.Tìm một từ đầu tiên bên trái
//
//    b.Tìm một từ đầu tiên bên phải
//
//    c.Đếm số lượng từ của chuỗi s
//
//    d.Đếm số ký tự của mỗi từ trong chuỗi s
//
//    e.Chuyển các ký tự đầu từ thành chữ hoa còn các ký tự khác thành chữ thường.
//
//    f.Kiểm tra xem chuỗi x có thuộc về chuỗi s hay không ? Nếu không trả về - I, nếu có trả về vị trí đầu tiên mà chuỗi x xuất hiện trong chuỗi s.
//
//    g.Đếm xem chuỗi x xuất hiện bao nhiêu lần trong chuỗi s ?

// input từ bàn phím, output lên màn hình.

// liên quan chuỗi ký tự, sinh viên có thể tùy ý sử dụng con trỏ hay không đều được.

// Tìm một từ đầu tiên bên trái
char* findFirstWordLeft(char* str) {
    char* p = str;
    while (*p != ' ') {
        p++;
    }
    return str;
}

// Tìm một từ đầu tiên bên phải
char* findFirstWordRight(char* str) {
    int len = strlen(str);
    char* p = str + len - 1;

    while (*p != ' ' && p >= str) {
        p--;
    }
    return p+1;
}

// Đếm số lượng từ của chuỗi s
int countWords(char* str) {
    int count = 1;
    char* p = str;
    while (*p != '\0') {
        if (*p == ' ') {
            count++;
        }
        p++;
    }
    return count;
}

// Đếm số ký tự của mỗi từ trong chuỗi s
void countCharacters(char* str) {
    char* p = str;
    while (*p != '\0') {
        int count = 0;
        while (*p != ' ' && *p != '\0') {
            count++;
            p++;
        }
        std::cout << count << " ";
        if (*p == ' ') {
            p++;
        }
    }
    std::cout << std::endl;
}

// Chuyển các ký tự đầu từ thành chữ hoa còn các ký tự khác thành chữ thường
void capitalizeFirstLetter(char* str) {
    char* p = str;
    bool newWord = true;
    while (*p != '\0') {
        if (newWord && islower(*p)) {
            *p = toupper(*p);
        }
        else if (!newWord && isupper(*p)) {
            *p = tolower(*p);
        }
        newWord = (*p == ' ');
        p++;
    }
    cout << str;
}

// Đếm xem chuỗi x xuất hiện bao nhiêu lần trong chuỗi s
int countOccurrences(char* str, char* x) {
    int count = 0;
    char* p = str;
    while ((p = strstr(p, x)) != nullptr) {
        count++;
        p += strlen(x);
    }
    return count;
}

int main() {
    char str[100];
    cout << "Nhập chuỗi s: ";
    cin.getline(str, 100);
    //cout<<findFirstWordLeft(str)<<endl;
    cout<< findFirstWordRight(str)<<endl;
    cout<< countWords(str)<<endl;
    countCharacters(str);
    cout << endl;
    capitalizeFirstLetter(str);
    cout << endl;
    char n[100];
    cout << "nhap chuoi can dem: ";
    cin >> n;
    cout << countOccurrences(str, n);
    return 0;
}
