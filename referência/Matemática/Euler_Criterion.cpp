
bool EulerCriterion(int n, int p){
    if (ModExp(n, (p - 1) >> 1, p) == 1) return true;
    return false;
}