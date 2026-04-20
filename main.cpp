#include <iostream>
#include <string>

#include <iostream>
#include <string>

// Define a structure to hold X and Y coordinates
struct Location {
    int x;
    int y;
};

struct ChessPiece {
    std::string name;
    Location pos;
};

ChessPiece getPieceData(int index) {
    // There are 32 pieces in total: 16 White (Putih) and 16 Black (Hitam)
    ChessPiece board[32] = {
        // --- BLACK PIECES (Hitam) ---
        {"BentengHitam1", {1, 8}}, {"KudaHitam1", {2, 8}}, {"GajahHitam1", {3, 8}}, {"RatuHitam", {4, 8}},
        {"RajaHitam", {5, 8}}, {"GajahHitam2", {6, 8}}, {"KudaHitam2", {7, 8}}, {"BentengHitam2", {8, 8}},
        {"PrajuritHitam0", {1, 7}}, {"PrajuritHitam1", {2, 7}}, {"PrajuritHitam2", {3, 7}}, {"PrajuritHitam3", {4, 7}},
        {"PrajuritHitam4", {5, 7}}, {"PrajuritHitam5", {6, 7}}, {"PrajuritHitam6", {7, 7}}, {"PrajuritHitam7", {8, 7}},

        // --- WHITE PIECES (Putih) ---
        {"PrajuritPutih0", {1, 2}}, {"PrajuritPutih1", {2, 2}}, {"PrajuritPutih2", {3, 2}}, {"PrajuritPutih3", {4, 2}},
        {"PrajuritPutih4", {5, 2}}, {"PrajuritPutih5", {6, 2}}, {"PrajuritPutih6", {7, 2}}, {"PrajuritPutih7", {8, 2}},
        {"BentengPutih1", {1, 1}}, {"KudaPutih1", {2, 1}}, {"GajahPutih1", {3, 1}}, {"RatuPutih", {4, 1}},
        {"RajaPutih", {5, 1}}, {"GajahPutih2", {6, 1}}, {"KudaPutih2", {7, 1}}, {"BentengPutih2", {8, 1}}
    };

    if (index >= 0 && index < 32) {
        return board[index];
    }
    return {"Kosong", {0, 0}}; // Return empty if index is out of bounds
}

bool GradientCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 && piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}

bool LinearCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 || piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}



int main() {
    int index1, index2;
    std::cout << "Masukkan indeks pertama (0-31): ";
    std::cin >> index1;
    std::cout << "Masukkan indeks kedua (0-31): ";
    std::cin >> index2;

    if (GradientCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada posisi yang sama. (GradientCheck = True)" << std::endl;
    } else if (LinearCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada garis yang sama (horizontal atau vertikal). (LinearCheck = True)" << std::endl;
    } else {
        std::cout << "Kedua bidak tidak berada pada posisi yang sama atau garis yang sama." << std::endl;
    }
    return 0;
}

bool GradientCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 || piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}

bool LinearCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 || piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}



int main() {
    int index1, index2;
    std::cout << "Masukkan indeks pertama (0-31): ";
    std::cin >> index1;
    std::cout << "Masukkan indeks kedua (0-31): ";
    std::cin >> index2;

    if (GradientCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada posisi yang sama." << std::endl;
    } else if (LinearCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada garis yang sama (horizontal atau vertikal)." << std::endl;
    } else {
        std::cout << "Kedua bidak tidak berada pada posisi yang sama atau garis yang sama." << std::endl;
    }
    return 0;
}
