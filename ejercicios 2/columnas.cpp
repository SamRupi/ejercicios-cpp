class Solution {
public:
    int titleToNumber(string columnTitle) {
        int resultado = 0;

        for(char c : columnTitle) {
            resultado = resultado * 26 + (c - 'A' + 1);
        }

        return resultado;
    }
};