#include <iostream>
#include "BTree/BTree.h"

std::vector keys = {
    782, 156, 957, 788, 29, 750, 440, 253, 945, 613,
    478, 349, 734, 111, 764, 798, 856, 603, 210, 418,
    407, 746, 423, 843, 311, 448, 362, 942, 620, 553,
    627, 561, 258, 434, 401, 973, 796, 217, 793, 123,
    163, 363, 536, 927, 655, 168, 588, 671, 921, 407,
    75, 572, 60, 393, 550, 897, 44, 759, 39, 7,
    463, 606, 365, 299, 586, 65, 366, 738, 967, 143,
    219, 831, 492, 273, 990, 174, 68, 273, 146, 146,
    263, 59, 261, 231, 108, 301, 431, 866, 467, 675,
    317, 931, 48, 313, 943, 713, 990, 733, 829, 958
};

std::vector<std::string> values = {
    "XLzPb", "TstB9", "UiEFG", "bAahi", "NmBUq", "hiBMT", "K0hRO", "I6X7U", "1fP2m", "GXGZF",
    "OJmA3", "6dRTN", "5UJUO", "pQfEV", "M7yha", "Ftcf5", "vHTrp", "TjQwe", "pPhE1", "f84Th",
    "OyXoN", "ZuuZI", "bb0H9", "USu49", "oaqOz", "sMnS4", "56WDb", "gGtL2", "h0GAV", "XyJxb",
    "73tug", "84Ioy", "otkIV", "anc51", "0kMae", "LfPIZ", "OjBw4", "l9lph", "Z2fyG", "xmhZT",
    "nhUJq", "oPUG0", "CbkLE", "J5v8r", "yfg5q", "QaV8H", "slXXx", "rkNsv", "JwVwR", "TTDfY",
    "LRfib", "LHhKa", "nh2FP", "St29c", "Y6ivz", "DM2Qx", "GVHuH", "bmKju", "9ChPQ", "RPSci",
    "9fU9c", "jpXN1", "tmBgI", "cK6I6", "QC8q4", "RTkGf", "mO91V", "X6j4V", "DlxCc", "b8onP",
    "T1UyE", "soWee", "RWsW5", "yFCoy", "5OEg5", "y8FFX", "OD9IK", "NQWFl", "TpaQv", "jA7Ax",
    "yAsAf", "xvwW0", "iNi5t", "Up6TA", "uG7La", "x2miU", "axooO", "3PK8y", "42DKx", "BWKiX",
    "UKb5h", "1pUP3", "N8t1m", "hgbf2", "BRO0V", "i2njO", "Sg0j3", "gsY0D", "oWomF", "jXInT"
};

int main() {

    const auto tree = new BTree(10);
    for (int i = 0; i < 100; i++) {
        tree->insert(keys[i], values[i]);
    }
    std::cout << "============================================" << std::endl;
    tree->print();
    std::cout << "============================================" << std::endl;
    tree->print();
    std::cout << "============================================" << std::endl;
    tree->print();
    std::cout << "============================================" << std::endl;
    tree->remove(942);
    tree->remove(7);
    tree->remove(29);
    std::cout << "============================================" << std::endl;
    tree->print();
    std::cout << "============================================" << std::endl;
    std::cout << "Key: 431 Value: " << tree->search(431) << std::endl;
    std::cout << "============================================" << std::endl;

    delete tree;
    return 0;
}
