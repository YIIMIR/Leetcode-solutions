class Solution {
public:
    string intToRoman(int num) {
        string s;

        while (num >= 1000) {
            s += 'M';
            num -= 1000;
            if (num < 0) {
                num += 1000;
            }
        }

        while (num >= 500) {
            s += 'D';
            num -= 500;
            if (num < 0) {
                num += 500;
            }

        }

        while (num >= 100) {
            s += 'C';
            num -= 100;
            if (num < 0) {
                num += 100;
            }

            if (s.size() >= 5)
                if (s.substr(s.size() - 5) == "DCCCC") {
                    (s.erase(s.size() - 5, 5));
                    s += "CM";
                }

            if (s.size() >= 4)
                if (s.substr(s.size() - 4) == "CCCC") {
                    (s.erase(s.size() - 3, 3));
                    s += 'D';
                }
        }

        while (num >= 50) {
            s += 'L';
            num -= 50;
            if (num < 0) {
                num += 50;
            }
        }

        while (num >= 10) {
            s += 'X';
            num -= 10;
            if (num < 0) {
                num += 10;
            }

            if (s.size() >= 5)
                if (s.substr(s.size() - 5) == "LXXXX") {
                    (s.erase(s.size() - 5, 5));
                    s += "XC";
                }

            if (s.size() >= 4)
                if (s.substr(s.size() - 4) == "XXXX") {
                    (s.erase(s.size() - 4, 4));
                    s += "XL";
                }
        }

        while (num >= 5) {
            s += 'V';
            num -= 5;
            if (num < 0) {
                num += 5;
            }
        }

        while (num >= 1) {
            s += 'I';
            num -= 1;
            if (num < 0) {
                num += 1;
            }

            if (s.size() >= 5) {
                if (s.substr(s.size() - 5) == "VIIII") {
                    (s.erase(s.size() - 5, 5));
                    s += "IX";
                }
            }

            if (s.size() >= 4) {
                if (s.substr(s.size() - 4) == "IIII") {
                    (s.erase(s.size() - 4, 4));
                    s += "IV";
                }
            }
        }

        return s;
    }
};