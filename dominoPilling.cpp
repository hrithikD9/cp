#include <iostream> //!  ACCEPTED
using namespace std;

int main()
{

    int M, N;
    cin >> M >> N;

    int rectangular_board = M * N;
    int domino_pieces = 2 * 1;
    int number_of_dominos = ((rectangular_board) / (domino_pieces));
    cout << number_of_dominos;

    return 0;
}