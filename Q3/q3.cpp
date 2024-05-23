int main(){
    int *a = (int *) 0xC0000fff;
    *a = 10;
    return 0;
}