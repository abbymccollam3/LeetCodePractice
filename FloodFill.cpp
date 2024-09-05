class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int oldColor = image[sr][sc];

        // make sure color does not equal the old color
        if (color != oldColor) {
            fillIn(image, sr, sc, oldColor, color);
        }

        return image;
    }

    void fillIn (vector<vector<int>>& image, int i, int j, int oldColor, int color) {

        // need to boundary check
        // need to make sure current pixel is same as old color
        if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != oldColor) {
            return; // return nothing
        }

        // if everything is in check
        image[i][j] = color;
        fillIn(image, i-1, j, oldColor, color);
        fillIn(image, i+1, j, oldColor, color);
        fillIn(image, i, j-1, oldColor, color);
        fillIn(image, i, j+1, oldColor, color);

        //return image;
    }
};
