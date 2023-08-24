int isWinner(int *player1, int player1Size, int *player2, int player2Size)
{
    int n = player1Size > player2Size ? player1Size : player2Size;
    int player1Score = 0, player2Score = 0;

    for( int i = 0; i < n; i++ ) {
        int j = i - 1;
        int k = i - 2;

        player1Score += (1 + ((j >= 0 && player1[j] == 10) || (k >= 0 && player1[k] == 10))) * player1[i];
        player2Score += (1 + ((j >= 0 && player2[j] == 10) || (k >= 0 && player2[k] == 10))) * player2[i];
    }

    return player1Score > player2Score ? 1 : player2Score > player1Score ? 2 : 0;
}
