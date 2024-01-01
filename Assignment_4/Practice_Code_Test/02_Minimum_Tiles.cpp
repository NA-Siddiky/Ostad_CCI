#include <iostream>
using namespace std;

int minimumTiles(int N, int M)
{
    int tiles = 0;

    while (N > 0 || M > 0)
    {
        if (N < M)
        {
            swap(N, M);
        }

        if (N >= 2 && M >= 2)
        {
            tiles += N / 2;
            N = N % 2;
        }
        else
        {
            tiles += (N + 1) / 2;
            break;
        }
    }

    return tiles;
}

int main()
{
    int N, M;
    cin >> N >> M;

    int minTiles = minimumTiles(N, M);
    cout << minTiles << endl;

    return 0;
}