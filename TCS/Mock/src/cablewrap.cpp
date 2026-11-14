// By the time i'm writing it's 3AM in México, so i'm pretty sure I can do a way better work at any other time xD
// This code needs a good refactor and test other flows, but right now I think is the best I can do, I'm very sorry
// I think it works for some of the basic test cases

#include <iostream>
#include <string>
#include <array>

using namespace std;

bool validateNAndM(array<int, 2> nAndM) {
    int n = nAndM[0];
    int m = nAndM[1];

    bool isValid = true;
    if (n < 5) {
        cout << "N must be bigger than 4 \n";
        isValid = false;
    } else if (m > 20) {
        cout << "M must be bigger than 20 \n";
        isValid = false;
    } else {
        isValid = true;
    }

    return isValid;
}

array<int, 2> getNAndM() {
    array<int, 2> nAndM;
    bool isValid = false;
    while (!isValid) {
        cout << "Type N and M (separate them with a white space): ";
        string nmString = "";
        getline(cin, nmString);

        int whitespacePosition = nmString.find(' ');
        int nmStringLength = nmString.length();

        string nString = nmString.substr(0, whitespacePosition);
        string mString = nmString.substr(whitespacePosition, nmStringLength);

        nAndM[0] = stoi(nString);
        nAndM[1] = stoi(mString);

        isValid = validateNAndM(nAndM);
    }

    return nAndM;
}

vector<vector<char>> getLaboratory(array<int, 2> nAndM) {
    int n = nAndM[0];
    int m = nAndM[1];
    vector<vector<char>> lab(n, vector<char>(m));

    cout << "Type the lines using the following code: \n";
        cout << "Empty space -> . \n";
        cout << "Rod -> R \n";
        cout << "Cable -> C \n";

    for (int i = 0; i < n; i++) {
        cout << "Type the line: \n";
        string line = "";
        getline(cin, line);

        if (line.length() > m) {
            cout << "You can't insert more spaces than M!";
            continue;
        }

        for (int j = 0; j < m; j++) {
            lab[i][j] = line[j];
        }
    }

    return lab;
}

array<int, 3> getRCoordinates(vector<vector<char>> lab, array<int, 2> nAndM) {
    int n = nAndM[0];
    int m = nAndM[1];

    array<int, 3> coordinates;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (lab[i][j] == 'R') {
                coordinates[0] = i;
                coordinates[1] = j;
                
                int nextRow = m - j - 1;
                if (lab[i][nextRow] == 'R') {
                    coordinates[2] = 1;
                }
                else {
                    coordinates[2] = 0;
                }

                break;
            }
        }
    }

    return coordinates;

}

int getRIntersectionsOfC(vector<vector<char>> lab, array<int, 2> nAndM, array<int, 3> coords) {
    int n = nAndM[0];
    int m = nAndM[1];
    int row = coords[0];
    int col = coords[1];
    int isVertical = coords[2];
    int intersections = 0;

    if (isVertical == 0) {
        for (int i = 0; i < m; i++) {
            if (lab[row][i] == 'C') {
                intersections++;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (lab[i][col] == 'C') {
                intersections++;
            }
        }
    }

    return intersections;
}

int getCIntersectionsOfR(vector<vector<char>> lab, array<int, 2> nAndM, array<int, 3> coords) {
    int n = nAndM[0];
    int m = nAndM[1];
    int row = coords[0];
    int col = coords[1];
    int isVertical = coords[2];
    int intersections = 0;

    if (isVertical == 0) {
        for (int i = 0; i < m; i++) {
            if (lab[row][i] == 'R') {
                if (row-1 > -1 && row+1 < n) {
                    if (lab[row-1][i] == 'R' && lab[row+1][i] == 'R') {
                        intersections++;
                    }
                }
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (lab[i][col] == 'R') {
                if (col-1 > -1 && col+1 < m) {
                    if (lab[i][col-1] == 'R' && lab[i][col+1] == 'R') {
                        intersections++;
                    }
                }
            }
        }
    }

    return intersections;
}

vector<int> getSwitchesCoordsForR(vector<vector<char>> lab, array<int, 2> nAndM, array<int, 3> coordinates) {
    int n = nAndM[0];
    int m = nAndM[1];
    int col = coordinates[1];
    int row = coordinates[0];
    int isVertical = coordinates[2];
    
    vector<int> coords;

    if (isVertical == 1) {
        coords.reserve(m);
        for (int i = 0; i < m; i++) {
            if (lab[col][i] == 'R') {
                coords.push_back(i);
            }
        }
    } else {
        coords.reserve(n);
        for (int i = 0; i < n; i++) {
            if (lab[i][row] == 'R') {
                coords.push_back(i);
            }
        }
    }

    return coords;
}

vector<int> getSwitchesCoordsForC(vector<vector<char>> lab, array<int, 2> nAndM, array<int, 3> coordinates) {
    int n = nAndM[0];
    int m = nAndM[1];
    int col = coordinates[1];
    int row = coordinates[0];
    int isVertical = coordinates[2];
    
    vector<int> coords;

    if (isVertical == 1) {
        coords.reserve(m);
        for (int i = 0; i < m; i++) {
            if (lab[col][i] == 'C') {
                coords.push_back(i);
            }
        }
    } else {
        coords.reserve(n);
        for (int i = 0; i < n; i++) {
            if (lab[i][row] == 'C') {
                coords.push_back(i);
            }
        }
    }

    return coords;
}

int switchToC(vector<vector<char>> lab, vector<int> cCoords, array<int, 3> coordinates) {
    int col = coordinates[1];
    int row = coordinates[0];
    int isVertical = coordinates[2];
    int switches = 0;

    if (isVertical == 1) {
        for (int i = 0; i < cCoords.size(); i++) {
            lab[row][i] = 'C';
            switches++;
        }
    } else {
        for (int i = 0; i < cCoords.size(); i++) {
            lab[i][col] = 'C';
            switches++;
        }
    }
    
    return switches;
}

int switchToR(vector<vector<char>> lab, vector<int> rCoords, array<int, 3> coordinates) {
    int col = coordinates[1];
    int row = coordinates[0];
    int isVertical = coordinates[2];
    int switches = 0;

    if (isVertical == 1) {
        for (int i = 0; i < rCoords.size(); i++) {
            lab[row][i] = 'R';
            switches++;
        }
    } else {
        for (int i = 0; i < rCoords.size(); i++) {
            lab[i][col] = 'R';
            switches++;
        }
    }
    
    return switches;
}

int getSwitches(array<int, 2> nAndM) {
    vector<vector<char>> lab = getLaboratory(nAndM);

    cout << "getRCoordinates \n";
    array<int, 3> rCoordinates = getRCoordinates(lab, nAndM);
    
    cout << "getRIntersectionsOfC \n";
    int rIntersectionsOfC = getRIntersectionsOfC(lab, nAndM, rCoordinates);

    int switches = 0;

    if (rIntersectionsOfC > 0) {
        cout << "getCIntersectionsOfR \n";
        int cIntersectionsOfR = getCIntersectionsOfR(lab, nAndM, rCoordinates);
        if (cIntersectionsOfR < rIntersectionsOfC) {
            cout << "getSwitchesCoordsForR \n";
            vector<int> switchesCoords = getSwitchesCoordsForR(lab, nAndM, rCoordinates);
            cout << "switchToC \n";
            switches = switchToC(lab, switchesCoords, rCoordinates);
        } else {
            cout << "getSwitchesCoordsForC \n";
            vector<int> switchesCoords = getSwitchesCoordsForC(lab, nAndM, rCoordinates);
            cout << "swicthToR \n";
            switches = switchToR(lab, switchesCoords, rCoordinates);
        }
    }

    return switches;
}

int main() {
    cout << "CABLE WARP \n";

    array<int, 2> nAndM = getNAndM();
    int switches = getSwitches(nAndM);
    cout << "Sum of switches made with the SUPERPOWER: " << switches << endl;

    return 0;
}