int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize) {
    int minDist = 100000;  
    int result = -1;

    for (int i = 0; i < pointsSize; i++) {
        int px = points[i][0];
        int py = points[i][1];

        if (px == x || py == y) {
            int dist = abs(px - x) + abs(py - y);
            if (dist < minDist) {
                minDist = dist;
                result = i;
            }
        }
    }

    return result;
}
