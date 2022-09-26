//
// Created by MD. Zahed on 26/09/2022.
//

typedef enum { wood, stone } material;
struct tile {
    int x, y;
    bool isWall;
    material type;
};


#define NROWS 12
#define NCOLS 16


int main2() {
    tile playground[NROWS][NCOLS];
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
                playground[i][j].type = wood;
            }
        }
    }
}
