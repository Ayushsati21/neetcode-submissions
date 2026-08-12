class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                char x=board[i][j];
                int b=(i/3)*3+(j/3);
                if(x=='.'){
                    continue;
                }
                if(row[i].count(x)||col[j].count(x)||box[b].count(x)){
                    return false;
                }
                else{
                    row[i].insert(x);
                    col[j].insert(x);
                    box[b].insert(x);
                }

            }
        }
            return true;

    }
};
