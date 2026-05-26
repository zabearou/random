#include <iostream>
#include <fstream>

std::ifstream in("file.in");
std::ofstream out("file.out");

int main() {
    int a[10][10],b[10][10],c[10][10];
    int na,ma,nb,mb;
    in>>na>>ma;
    for (int i=0;i<na;i++) {
        for (int j=0;j<ma;j++)in>>a[i][j];
    }
    in>>nb>>mb;
    for (int i=0;i<nb;i++) {
        for (int j=0;j<mb;j++)in>>b[i][j];
    }
    //j de la a[][]
    //i de la b[][]
    for (int i=0;i<na;i++) {
        for (int j=0;j<mb;j++) {
            c[i][j]=0;
            for (int k=0;k<ma;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }


    for (int i=0;i<na;i++) {
        for (int j=0;j<mb;j++)std::cout<<c[i][j]<<" ";
        std::cout<<"\n";
    }
}
