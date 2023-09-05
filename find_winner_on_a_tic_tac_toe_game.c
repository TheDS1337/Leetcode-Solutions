char *tictactoe(int **moves, int movesSize, int *movesColSize)
{
    int i, j, vert_plays, horz_plays, diag_plays, *move, *other_move;

    for( i = 0; i < movesSize; i++ ) {
        vert_plays = horz_plays = diag_plays = 0;
        move = moves[i];

        if( i % 2 == 0 ) {          // Player 1
            for( j = 0; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[0] != move[0] )
                    continue;

                horz_plays++;
            }

            if( horz_plays == 3 ) 
                return "A";

            for( j = 0; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[1] != move[1] )
                    continue;

                vert_plays++;
            }

            if( vert_plays == 3 ) 
                return "A";

            for( j = 0; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[0] != other_move[1] )
                    continue;

                diag_plays++;
            }

            if( diag_plays == 3 ) 
                return "A";

            diag_plays = 0;

            for( j = 0; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[0] + other_move[1] != 2 )
                    continue;

                diag_plays++;
            }

            if( diag_plays == 3 ) 
                return "A";
        } else {                    // Player B
            for( j = 1; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[0] != move[0] )
                    continue;

                horz_plays++;
            }

            if( horz_plays == 3 ) 
                return "B";

            for( j = 1; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[1] != move[1] )
                    continue;

                vert_plays++;
            }

            if( vert_plays == 3 ) 
                return "B";

            for( j = 1; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[0] != other_move[1] )
                    continue;

                diag_plays++;
            }

            if( diag_plays == 3 ) 
                return "B";

            diag_plays = 0;

            for( j = 1; j <= i; j += 2 ) {
                other_move = moves[j];

                if( other_move[0] + other_move[1] != 2 )
                    continue;

                diag_plays++;
            }

            if( diag_plays == 3 ) 
                return "B";
        }
    }

    return movesSize == 9 ? "Draw" : "Pending";
}
