#include <iostream>
#include <vector>
#include <iomanip> // Thư viện để căn lề (setw)

using namespace std;

int n, m;
int matrix[100][100]; // Ma trận kề

int main() {
    // 1. Nhập số đỉnh và số cạnh từ bàn phím
    cout << "Nhap so dinh (n) va so canh (m): ";
    cin >> n >> m;

    // Khởi tạo ma trận toàn số 0
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) matrix[i][j] = 0;
    }

    // 2. Đọc các cạnh từ bàn phím
    cout << "Nhap " << m << " dong tiep theo (u v w): \n";
    
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w; // Thay in >> bằng cin >>
        
        // Đồ thị vô hướng: a[u][v] = a[v][u] = trọng số
        matrix[u][v] = w;
        matrix[v][u] = w;
    }

    // 3. Xuất ma trận kề
    cout << "\n--- MA TRAN KE (TRONG SO) ---\n\n";
    
    // In hàng tiêu đề số đỉnh
    cout << "      ";
    for(int i = 1; i <= n; i++) cout << setw(5) << i; // Tăng độ rộng lên 5 cho đẹp
    cout << endl << endl;

    // In nội dung ma trận
    for (int i = 1; i <= n; i++) {
        cout << setw(4) << i << "  "; // In cột tiêu đề
        for (int j = 1; j <= n; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}