#include <iostream>
#include <fstream>

std::ifstream in("file.in");
std::ofstream out("file.out");

int main() {
    int a[10][10],b[10][10],c[10][10];
    int n,m;
    in>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)in>>a[i][j];
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)in>>b[i][j];
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)std::cout<<c[i][j]<<" ";
    std::cout<<"\n";
    }
}
