#include <iostream>

using namespace std;

class matrix
{
    int **p;
    int d1, d2;

public:
    matrix() {}
    matrix(int x, int y);
    void setElement(int i, int j, int value) { p[i][j] = value; }
    int getValue(int i, int j)
    {
        return p[i][j];
    }
    matrix operator+(matrix);

    // substruction
    // multiplication
};

matrix ::matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
    }
}
matrix matrix::operator+(matrix m)
{
    matrix temp(m.d1, m.d2);
    for (int i = 0; i < m.d1; i++)
    {
        for (int j = 0; j < m.d2; j++)
        {
            temp.p[i][j] = p[i][j] + m.p[i][j];
        }
    }
    return temp;
}

int main()
{
    int m, n, value;
    cout << "Enter the order of the matrix: (m,n): ";
    cin >> m >> n;
    matrix A(m, n);
    matrix B(m, n);
    matrix result(m, n);

    cout << "Enter the elements of 1st matrixt.......\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the value of (" << i + 1 << ", " << j + 1 << ")" << endl;
            cin >> value;
            A.setElement(i, j, value);
        }
    }
    cout << "Enter the elements of 2nd matrixt.......\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the value of (" << i + 1 << ", " << j + 1 << ")" << endl;
            cin >> value;
            B.setElement(i, j, value);
        }
    }

    result = A + B; // A.opertor+(B)

    cout << "\n\n------------Matrix----------\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result.getValue(i, j) << "\t";
        }
        cout << endl;
    }
    return 0;
}