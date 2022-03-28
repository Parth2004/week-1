int main(){
    int *a;
    a = readNumbers();
    int secondsmall = secondSmallestSum(a, 4);
    std::cout << "Second smallest sum: " << secondsmall << std::endl;

    return 0;
}